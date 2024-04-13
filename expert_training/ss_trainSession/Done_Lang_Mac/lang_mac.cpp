#include<iostream>
using namespace std;

int N;
int st = -1;
int en = -1;
int v[305];
int q[100005];
int adj[305][305];

void init(){
    st = en = -1;
}

void deQueue(){
    st += 1;
}

bool isEmpty(){
    return st == en;
}

void enQueue(int n){
    en += 1;
    q[en] = n;
}

void set_v(){
    for(int i = 0; i < N; i++) v[i] = 0;
}

void bfsv(int n){
    init();
    v[n] = 1;
    enQueue(n);
    while(!isEmpty()){
        int r = q[st + 1];
        for(int i = 0; i < N; i++){
            if(!v[i] && adj[i][r] == 1){
                v[i] = 1;
                enQueue(i);
            }
        }
        deQueue();
    }
}

void bfsc(int r, int t){
    init();
    set_v();
    v[r] = 1;
    enQueue(r);
    while(!isEmpty()){
        int rr = q[st + 1];
        for(int i = 0; i < N; i++){
            if(!v[i] && adj[rr][i] == 1){
                enQueue(i);
                v[i] = 1;
                if(i == t) return;
            }
        }
        deQueue();
    }
}

int main(){

    freopen("inp.txt", "r", stdin);
    int test; cin >> test;

    for(int tc = 0; tc < test; tc++){
        cin >> N; set_v();
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cin >> adj[i][j];
            }
        }

        int vung = 0, colap = 0, cau = 0;

        for(int i = 0; i < N; i++){
            if(!v[i]){
                bfsv(i);
                vung += 1;
            }
        }

        for(int i = 0; i < N; i++){
            int cnt = 0;
            for(int j = 0; j < N; j++){
                if(adj[i][j] == 1) cnt += 1;
            }
            if(cnt == 0) colap += 1;
        }


        for(int i = 0; i < N - 1; i++){
            for(int j = i + 1; j < N; j++){
                if(adj[i][j] == 1){
                    adj[i][j] = 0;
                    adj[j][i] = 0;

                    bfsc(i, j);
                    if(v[j] == 0) cau += 1;

                    adj[i][j] = 1;
                    adj[j][i] = 1;
                }
            }
        }


        cout << vung << " " << colap << " " << cau << endl;
    }
    return 0;
}