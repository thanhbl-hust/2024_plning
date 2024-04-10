#include<iostream>
using namespace std;

int choosen[25];
int N, M;
int st = -1;
int en = -1;
int q[625][3];
int v[25][25];
int dis[25][25];
char map[25][25];
int nMap[25][25];
int ans = 1e6;
int countDirt = 1;
int dr[4] = {1, -1, 0, 0};
int dc[4] = {0, 0, 1, -1};

void deQueue(){
    st += 1;
}

bool isEmpty(){
    if(st == en) return true;
    return false;
}

void init(){
    st = -1;
    en = -1;
}

void enQueue(int r, int c, int s){
    en += 1;
    q[en][0] = r;
    q[en][1] = c;
    q[en][2] = s;
}

void setV(){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            v[i][j] = 0;
        }
    }
}

void setChoosen(){
    for(int i = 0; i < countDirt + 1; i++){
        choosen[i] = 0;
    }
}

void setMap(){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            nMap[i][j] = -1;
        }
    }
}

void setDis(){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            dis[i][j] = 1e6;
        }
    }
}

void bfs(int r, int c, int step){
    v[r][c] = 1;
    enQueue(r, c, step);
    while(!isEmpty()){
        int rr = q[st + 1][0];
        int cc = q[st + 1][1];
        int ss = q[st + 1][2];
        for(int i = 0; i < 4; i++){
            int newR = rr + dr[i];
            int newC = cc + dc[i];
            if(newR >= 0 && newR < N && newC >= 0 && newC < M){
                if(nMap[newR][newC] != -2){
                    if(!v[newR][newC]){
                        enQueue(newR, newC, ss + 1);
                        v[newR][newC] = 1;
                        if(nMap[newR][newC] >= 0){
                            dis[nMap[r][c]][nMap[newR][newC]] = ss + 1;
                            dis[nMap[newR][newC]][nMap[r][c]] = ss + 1;
                        }
                    }
                }
            }
        }

        deQueue();
    }

}

void backtrack(int k, int step, int before){
    if(step > ans) return;

    if(k == countDirt){
        if(step < ans) ans = step;
        return;
    }

    for(int i = 1; i < countDirt; i++){
        if(choosen[i] == 0){
            choosen[i] = 1;
            backtrack(k + 1, step + dis[i][before], i);
            choosen[i] = 0;
        }
    }

}

int main(){

    freopen("inp.txt", "r", stdin);

    while(1){
        countDirt = 1;
        ans = 1e6;
        cin >> M >> N;
        if(N == 0 || M == 0) break;
        setDis();
        setMap();
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                cin >> map[i][j];
                if(map[i][j] == 'o') nMap[i][j] = 0;
                if(map[i][j] == '*'){
                    nMap[i][j] = countDirt;
                    countDirt += 1;
                }
                if(map[i][j] == 'x') nMap[i][j] = -2;
            }
        }

        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(nMap[i][j] >= 0){
                    setV();
                    bfs(i, j, 0);
                }
            }
        }

        bool pos = true;

        for(int i = 0; i < countDirt; i++){
            for(int j = 0; j < countDirt; j++){
                if(i != j && dis[i][j] == 1e6){
                    pos = false;
                    break;
                }
            }
            if(!pos) break;
        }

        if(pos == false) ans = -1;

        if(pos){
            setChoosen();
            choosen[0] = 1;
            backtrack(1, 0, 0);
        }
        
        

        cout << ans << endl;
    }

    return 0;
}