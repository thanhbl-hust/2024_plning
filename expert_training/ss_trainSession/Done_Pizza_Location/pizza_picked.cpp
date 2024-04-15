#include<iostream>

using namespace std;

int K, R, M, N;
int locations[25][2];
int customer[100][3];
int v[25];
int ok[100];
int ans = 0;
int dis[25][105];

void set_v(){
    for(int i = 0; i < M; i++) v[i] = 0;
}

void set_ok(){
    for(int i = 0; i < N; i++) ok[i] = 0;
}

void set_dis(){
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            dis[i][j] = 0;
        }
    }
}

void backtrack(int k, int pick){
    if(pick > K) return;

    if(k == M){
        if(pick == K){
            set_ok();
            int count = 0;
            for(int i = 0; i < M; i++){
                if(v[i] == 1){
                    for(int j = 0; j < N; j++){
                        if(dis[i][j] == 1) ok[j] = 1;
                    }
                }
            }
            for(int i = 0; i < N; i++) count += ok[i] * customer[i][2];
            if(count > ans) ans = count;
        }
        return;
    }
    backtrack(k + 1, pick);
    v[k] = 1;
    backtrack(k + 1, pick + 1);
    v[k] = 0;
}

int main(){
    freopen("inp.txt", "r", stdin);

    int test; cin >> test;

    for(int tc = 0; tc < test; tc++){
        ans = 0;
        cin >> K >> R;

        cin >> M; for(int i = 0; i < M; i++) cin >> locations[i][0] >> locations[i][1];
        cin >> N; for(int i = 0; i < N; i++) cin >> customer[i][0] >> customer[i][1] >> customer[i][2];

        set_v();
        set_ok();
        set_dis();

        for(int i = 0; i < M; i++){
            int x = locations[i][0], y = locations[i][1];
            for(int j = 0; j < N; j++){
                int xx = customer[j][0], yy = customer[j][1];
                int kc = (x - xx) * (x - xx) + (y - yy) * (y - yy);
                if(kc <= R * R) dis[i][j] = 1;
            }
        }

        backtrack(0, 0);

        // for(int i = 0; i < M; i++){
        //     for(int j = 0; j < N; j++){
        //         cout << dis[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        cout << "#" << tc + 1 << " " << ans << endl;
    }

    return 0;
}