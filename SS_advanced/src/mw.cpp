#include<iostream>
using namespace std;

int N;
int map[105][105];
bool found = false;
int q[10005][2];
int v[105][105];
int st = -1, en = -1;
int dr[4] = {0, 0, 1, -1};
int dc[4] = {1, -1, 0, 0};


void init(){
    st = -1;
    en = -1;
}

void enQueue(int r, int c){
    en += 1;
    q[en][0] = r;
    q[en][1] = c;
}

void deQueue(){
    st += 1;
}

bool isEmpty(){
    if(st == en) return true;
    return false;
}

void reset_v(){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            v[i][j] = 0;
        }
    }
}


void bfs(int mn, int mx){
    if(map[0][0] <= mx && map[0][0] >= mn){
        reset_v(); 
        init();
        enQueue(0, 0);
        v[0][0] = 0;
        while(!isEmpty()){
            int r = q[st + 1][0];
            int c = q[st + 1][1];
            for(int i = 0; i < 4; i++){
                int nR = r + dr[i];
                int nC = c + dc[i];
                if(nR >= 0 && nR < N && nC >= 0 && nC < N){
                    if(v[nR][nC] == 0){
                        if(map[nR][nC] >= mn && map[nR][nC] <= mx){
                            v[nR][nC] = 1;
                            if(nR == N - 1 && nC == N - 1){
                                found = true;
                                break;
                            }
                            enQueue(nR, nC);
                        }
                    }
                }
            }
            deQueue();
        }
    }
}


int main(){
    freopen("out.txt", "r", stdin);

    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> map[i][j];
        }
    }

    for(int i = 0; i <= 110; i++){
        for(int j = 0; j + i <= 110; j++){
            found = false;
            bfs(j, j + i);                
            if(found){
                cout << i << endl;
                break;
            }
        }
        if(found) break;
    }

    return 0;
}