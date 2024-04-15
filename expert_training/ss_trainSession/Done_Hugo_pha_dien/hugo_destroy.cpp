#include<iostream>

using namespace std;

int N;
int m[105][105];
int q[105];
int v[105];
int st = -1, en = -1;

void init(){
    st = en = -1;
}

void enQueue(int ver){
    en += 1;
    q[en] = ver;
}

void deQueue(){
    st += 1;
}

bool isEmpty(){
    return st == en;
}

void set_v(){
    for(int i = 0; i < N; i++) v[i] = 0;
}

void bfs(int ver){
    init();
    enQueue(ver);
    v[ver] = 1;
    while(!isEmpty()){
        int currV = q[st + 1];
        for(int i = 0; i < N; i++){
            if(!v[i] && m[currV][i] == 1){
                enQueue(i);
                v[i] = 1;
            }
        }
        deQueue();
    }
}

int main(){
    freopen("inp.txt", "r", stdin);

    int test; cin >> test;

    for(int tc = 0; tc < test; tc++){
        cin >> N;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cin >> m[i][j];
            }
        }

        int maxArea = -1;
        int ver = -1;

        for(int i = 0; i < N; i++){
            int area = 0;
            set_v();
            for(int j = 0; j < N; j++){
                if(m[i][j] == 1) m[i][j] = m[j][i] = -1;
            }

            for(int ii = 0; ii < N; ii++){
                if(!v[ii]){
                    area += 1;
                    bfs(ii);
                }
            }

            for(int j = 0; j < N; j++){
                if(m[i][j] == -1) m[i][j] = m[j][i] = 1;
            }

            if(area > maxArea){
                maxArea = area;
                ver = i;
            }
        }
        //cout << maxArea << endl;
        cout << (maxArea != 2 ? ver + 1 : 0) << endl;

    }

    return 0;
}