#include<iostream>

using namespace std;

int N, M;
char m[205][205];
int v[205][205];
int q[1000005][4];
int x, y, xx, yy;
int st = -1, en = -1;
int dr[] = {1, -1, 0, 0};
int dc[] = {0, 0, 1, -1};

void deQueue(){
    st += 1;
}

void enQueue(int r, int c, int w, int cnt){
    en += 1;
    q[en][0] = r;
    q[en][1] = c;
    q[en][2] = w;
    q[en][3] = cnt;
}

void init(){
    st = en = -1;
}

bool isEmpty(){
    return st == en;
}

void set_v(){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            v[i][j] = 1e6;
        }
    }
}

void bfs(int r, int c){
    init();
    v[r][c] = -1;
    enQueue(r, c, -1, 0);
    while(!isEmpty()){
        int rr = q[st + 1][0];
        int cc = q[st + 1][1];
        int ww = q[st + 1][2];
        int step = q[st + 1][3];
        for(int i = 0; i < 4; i++){
            int newR = rr + dr[i], newC = cc + dc[i];
            if(newR >= 0 && newR < N && newC >= 0 && newC < M && m[newR][newC] == '0'){
                int bonus = 1;
                if(ww == -1 || i == ww) bonus -= 1;
                if(step + bonus <= v[newR][newC]){
                    v[newR][newC] = step + bonus;
                    enQueue(newR, newC, i, step + bonus);
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

        cin >> M >> N >> y >> x >> yy >> xx;
        set_v();
        x -= 1; y -= 1; xx -= 1; yy -= 1;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                cin >> m[i][j];
            }
        }
        bfs(x, y);
        cout << v[xx][yy] << endl;
    }

    return 0;
}