#include<iostream>

using namespace std;

int m[105][105];
int v[105][105];
int st = -1, en = -1;
int q[10005][3];
int N, M, x, y, ans = 0;
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

void set_v(){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            v[i][j] = 0;
        }
    }
}

void bfs(int r, int c){
    init();
    enQueue(r, c, 1);
    v[r][c] = 1;
    while(!isEmpty()){
        int rr = q[st + 1][0], cc = q[st + 1][1];
        int step = q[st + 1][2];
        for(int i = 0; i < 4; i++){
            int newR = rr + dr[i];
            int newC = cc + dc[i];
            if(newR >= 0 && newC >= 0 && newR < N && newC < M){
                if(m[newR][newC] == 1){
                    if(!v[newR][newC]){
                        enQueue(newR, newC, step + 1);
                        v[newR][newC] = 1;
                        if(step + 1 > ans) ans = step + 1;
                    }
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
        ans = 0;
        cin >> M >> N;
        set_v();
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                cin >> m[i][j];
            }
        }
        cin >> y >> x;
        x -= 1; y -= 1;
        bfs(x, y);
        cout << ans << endl;
    }

    return 0;
}