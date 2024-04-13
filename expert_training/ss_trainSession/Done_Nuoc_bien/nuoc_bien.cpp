#include<iostream>

using namespace std;


int N, M;
int m[1005][1005];
int nMap[1005][1005];
int q[1000005][2];
int st = -1, en = -1;
int dr[] = {1, -1, 0, 0};
int dc[] = {0, 0, 1, -1};
int v[1005][1005];

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

bool isSide(int r, int c){
    if(r == 0 || r == N - 1) return true;
    if(c == 0 || c == M - 1) return true;
    return false;
}

void bfs_h(int r, int c, int height){
    init();
    enQueue(r, c);
    v[r][c] = 1;
    while(!isEmpty()){
        int rr = q[st + 1][0];
        int cc = q[st + 1][1];
        for(int i = 0; i < 4; i++){
            int newR = rr + dr[i];
            int newC = cc + dc[i];
            if(newR >= 0 && newR < N && newC >= 0 && newC < M){
                if(!v[newR][newC] && nMap[newR][newC] <= height){
                    enQueue(newR, newC);
                    v[newR][newC] = 1;
                    nMap[newR][newC] = -1;
                }
            }
        }
        deQueue();
    }
}

void bfs_l(int r, int c){
    init();
    enQueue(r, c);
    v[r][c] = 1;
    while(!isEmpty()){
        int rr = q[st + 1][0];
        int cc = q[st + 1][1];
        for(int i = 0; i < 4; i++){
            int newR = rr + dr[i];
            int newC = cc + dc[i];
            if(newR >= 0 && newR < N && newC >= 0 && newC < M){
                if(!v[newR][newC] && nMap[newR][newC] != -1){
                    enQueue(newR, newC);
                    v[newR][newC] = 1;
                }
            }
        }
        deQueue();
    }
}

int main(){

    freopen("inp.txt", "r", stdin);

    while(true){
        int maxVal = 0;
        cin >> N >> M;
        if(N == 0 || M == 0) break;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                cin >> m[i][j];
                if(isSide(i, j) && m[i][j] > maxVal) maxVal = m[i][j];
            }
        }

        int water_height = 1;


        while(water_height <= maxVal){
            for(int i = 0; i < N; i++){
                for(int j = 0; j < M; j++){
                    nMap[i][j] = m[i][j];
                }
            }

            set_v();
            for(int i = 0; i < N; i++){
                for(int j = 0; j < M; j++){
                    if(isSide(i, j) && !v[i][j] && nMap[i][j] <= water_height){
                        nMap[i][j] = -1;
                        bfs_h(i, j, water_height);
                    }
                }
            }

            set_v();
            int area = 0;
            for(int i = 0; i < N; i++){
                for(int j = 0; j < M; j++){
                    if(!v[i][j] && nMap[i][j] != -1){
                        area += 1;
                        bfs_l(i, j);
                    }
                }
            }

            if(area > 1) break;
            water_height += 1;
        }

        if(water_height == maxVal + 1){
            cout << "Island never splits." << endl;
        }else cout << "Island splits when ocean raises " << water_height << " feet." << endl;

    }

    return 0;
}