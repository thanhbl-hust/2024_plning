//in ra so chu trinh trong do thi;
#include<iostream>
using namespace std;
bool foundCycle = false;
int N;
int root = -1;
int parent[1000];
int visited[1000];
int adj[1000][1000];
int cycles[100][100];
int ansCount = 0;
int inCycle[10];
int cycle[10];
void resetAll(){
    for(int i = 0; i < N; i++){
        visited[i] = 0;
        parent[i] = -1;
    }
}
bool check(){
    for(int i = 0; i < ansCount; i++){
        int dem = 0;
        for(int j = 0; j < N; j++){
            if(cycles[i][j] == inCycle[j]) dem += 1;
        }
        if(dem == N) return false;
    }
    return true;
}
void add(){
    for(int i = 0; i < N; i++){
        cycles[ansCount][i] = inCycle[i];
    }
}
void printCycle(int v){
    for(int i = 0; i < N; i++) inCycle[i] = false;
    inCycle[v] = true;
    for(int j = parent[v]; j != v; j = parent[j]){
        inCycle[j] = true;
    }
    if(check() == true){
        add();
        ansCount += 1;
    }
}
void DFS(int v, int step){
    for(int i = 0; i < N; i++){
        if(adj[i][v] != 0){
            if(i == root && step > 1){
                parent[i] = v;
                printCycle(i);
                return;
            }else if(visited[i] == 0){
                visited[i] = 1;
                parent[i] = v;
                DFS(i, step + 1);
                visited[i] = 0;
            }
        }
    }
}
int main(){
    freopen("in.txt", "r", stdin);
    int test; cin >> test;
    for(int tc = 0; tc < test; tc++){
        ansCount = 0;
        cin >> N;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cin >> adj[i][j];
            }
        }
        for(int i = 0; i < N; i++){
            resetAll();
            root = i;
            visited[i] = 1;
            DFS(i, 0);
            visited[i] = 0;
        }
        cout << ansCount << endl;
    }
    return 0;
}