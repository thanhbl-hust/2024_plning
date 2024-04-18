#include<iostream>

using namespace std;

int q[10005][3];
int st = -1;
int en = -1;
int v[9][9];
int x, y, xx, yy;

int dr[] = {-1, -2, -2, -1, 1, 2, 2, 1};
int dc[] = {-2, -1, 1, 2, 2, 1, -1, -2};

void init(){
    st = en = -1;
}

void enQueue(int r, int c, int s){
    en++;
    q[en][0] = r;
    q[en][1] = c;
    q[en][2] = s;
}

void deQueue(){
    st++;
}

bool isEmpty(){
    return st == en;
}

void reset_v(){
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            v[i][j] = 1e9;
        }
    }
}

void bfs(int r, int c){
    init();
    v[r][c] = 0;
    enQueue(r, c, 0);
    while(!isEmpty()){
        int rr = q[st + 1][0];
        int cc = q[st + 1][1];
        int ss = q[st + 1][2];
        for(int i = 0; i < 8; i++){
            int nR = rr + dr[i];
            int nC = cc + dc[i];
            if(nR > 0 && nC > 0 && nR < 9 && nC < 9){
                if(ss + 1 < v[nR][nC]){
                    v[nR][nC] = ss + 1;
                    enQueue(nR, nC, ss + 1);
                    if(nR == xx && nC == yy) return;
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
        string a, b; cin >> a >> b;
        x = a[1] - '0';
        xx = b[1] - '0';
        y = a[0] - 'a' + 1;
        yy = b[0] - 'a' + 1;

        reset_v();
        bfs(x, y);
        cout << v[xx][yy] << endl;

        //cout << x << " " << y << " " << xx << " " << yy << endl;
    }

    return 0;
}