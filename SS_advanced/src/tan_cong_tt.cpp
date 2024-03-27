//in ra 1 chu trinh duy nhat;

#include<iostream>
using namespace std;

bool foundCycle = false;
int N;
int root = -1;
int parent[1000];
int visited[1000];
int adj[1000][1000];

void resetAll(){
    for(int i = 0; i < N; i++){
        visited[i] = 0;
        parent[i] = -1;
    }
}

void printCycle(int v){
    cout << v << " ";
    for(int j = parent[v]; j != v; j = parent[j]){
        cout << j << " ";
    }
    cout << v << endl;
}

void DFS(int v, int step){
    if(foundCycle) return;
    for(int i = 0; i < N; i++){
        if(adj[i][v] != 0){
            if(i == root && step > 1){
                parent[i] = v;
                foundCycle = true;
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
    freopen("inp.txt", "r", stdin);

    int test; cin >> test;

    for(int tc = 0; tc < test; tc++){

        cin >> N;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cin >> adj[i][j];
            }
        }

        foundCycle = false;

        for(int i = 0; i < N; i++){
            if(foundCycle) break;
            resetAll();
            root = i;
            visited[i] = 1;
            DFS(i, 0);
            visited[i] = 0;

        }

    }

    return 0;
}