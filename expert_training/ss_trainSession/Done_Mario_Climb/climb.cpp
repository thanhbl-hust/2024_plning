#include<iostream>

using namespace std;

int h = 1;
int N, M;
int m[51][51];
int v[51][51];
int q[2501][2];
int x, y, xx, yy;
int st = -1, en = -1;
int dr[] = {0, 0};
int dc[] = {1, -1};

void init(){
    st = en = -1;
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
    return st == en;
}

void set_v(){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            v[i][j] = 0;
        }
    }
}

void bfs(int r, int c){
    v[r][c] = 1;
    enQueue(r, c);
    while(!isEmpty()){
        int rr = q[st + 1][0], cc = q[st + 1][1];
        for(int i = 0; i < 2; i++){
            int nR = rr + dr[i], nC = cc + dc[i];
            if(nR >= 0 && nR < N && nC >= 0 && nC < M){
                if(!v[nR][nC] && m[nR][nC] != 0){
                    enQueue(nR, nC);
                    v[nR][nC] = 1;
                }
            }
        }
        for(int i = -1 * h; i < h + 1; i++){
            int nR = rr + i, nC = cc;
            if(nR >= 0 && nR < N && nC >= 0 && nC < M){
                if(!v[nR][nC] && m[nR][nC] != 0){
                    enQueue(nR, nC);
                    v[nR][nC] = 1;
                }
            }
        }
        deQueue();
    }
}

int main(){

    freopen("inp.txt", "r", stdin);

    int test; cin >> test;

    for(int tc = 0; tc < test; tc++){
        cin >> N >> M;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                cin >> m[i][j];
                if(m[i][j] == 2){
                    x = i;
                    y = j;
                }else if(m[i][j] == 3){
                    xx = i;
                    yy = j;
                }
            }
        }
        h = 1;
        while(1){
            set_v();
            bfs(x, y);
            if(v[xx][yy]) break;
            h += 1;
        }
        cout << "Case #" << tc + 1 << endl << h << endl;
    }
    return 0;
}