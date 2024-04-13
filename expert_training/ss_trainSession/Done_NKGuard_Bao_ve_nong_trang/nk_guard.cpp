//link: https://vn.spoj.com/problems/NKGUARD/

//code accepted below;

#include<iostream>
using namespace std;

int N, M;
int ans = 0;
int st = -1;
int en = -1;
int q[49005][2];
int v[705][705];
int m[705][705];
int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};


void init(){
    st = en = -1;
}

void deQueue(){
    st += 1;
}

void enQueue(int r, int c){
    en += 1;
    q[en][0] = r;
    q[en][1] = c;
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
    bool isTop = true;
    v[r][c] = 1;
    enQueue(r, c);
    while(!isEmpty()){
        int rr = q[st + 1][0];
        int cc = q[st + 1][1];
        for(int i = 0; i < 8; i++){
            int nR = rr + dr[i], nC = cc + dc[i];
            if(nR >= 0 && nR < N && nC >= 0 && nC < M){
                if(!v[nR][nC] && m[nR][nC] == m[r][c]){
                    v[nR][nC] = 1;
                    enQueue(nR, nC);
                }
                if(m[nR][nC] > m[r][c]) isTop = false;
            }
        }
        deQueue();
    }
    ans += isTop;
    //if(isTop) cout << r << " " << c << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    freopen("inp.txt", "r", stdin);
    ans = 0;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> m[i][j];
        }
    }
    set_v();

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(!v[i][j]){
                bfs(i, j);
            }
        }
    }

    cout << ans << endl;
    return 0;
}