#include<iostream>

using namespace std;

int N, G;
int m[20][20];
int q[10005][3];
int st = -1, en = -1;
int locations[4][2];
int matrix[4][20][20];
int dr[] = {1, -1, 0, 0};
int dc[] = {0, 0, 1, -1};


void init(){
    st = en = -1;
}

void enQueue(int r, int c, int s){
    en += 1;
    q[en][0] = r;
    q[en][1] = c;
    q[en][2] = s;
}

void deQueue(){
    st += 1;
}

bool isEmpty(){
    return st == en;
}

void set_dis(){
    for(int i = 0; i < G; i++){
        for(int j = 0; j < N; j++){
            for(int k = 0; k < N; k++){
                matrix[i][j][k] = 1e9;
            }
        }
    }
}

void bfs(int index, int r, int c){
    init();
    enQueue(r, c, 0);
    while(!isEmpty()){
        int rr = q[st + 1][0];
        int cc = q[st + 1][1];
        int ss = q[st + 1][2];
        for(int i = 0; i < 4; i++){
            int nR = rr + dr[i], nC = cc + dc[i];
            if(nR >= 0 && nR < N && nC >= 0 && nC < N){
                if(m[nR][nC] != 0){
                    if(ss + 1 < matrix[index][nR][nC]){
                        matrix[index][nR][nC] = ss + 1;
                        enQueue(nR, nC, ss + 1);
                    }
                }
            }
        }
        deQueue();
    }

}

int main(){
    int test; cin >> test;

    for(int tc = 0; tc < test; tc++){
        cin >> N >> G;
        for(int i = 0; i < G; i++) cin >> locations[i][0] >> locations[i][1];
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cin >> m[i][j];
            }
        }

        for(int i = 0; i < G; i++){
            m[locations[i][0] - 1][locations[i][1] - 1] = 2;
        }

        set_dis();

        for(int i = 0; i < G; i++){
            int x = locations[i][0] - 1, y = locations[i][1] - 1;
            matrix[i][x][y] = 0;
            bfs(i, x, y);
        }

        int ans = 1e8;

        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(m[i][j] == 1){
                    int maxVal = -1;
                    for(int k = 0; k < G; k++){
                        if(matrix[k][i][j] > maxVal) maxVal = matrix[k][i][j];
                    }
                    if(maxVal < ans) ans = maxVal;
                }
            }
        }

        cout << "#" << tc + 1 << " " << ans << endl;

    }

    return 0;
}