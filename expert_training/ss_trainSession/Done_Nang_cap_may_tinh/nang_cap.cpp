#include<iostream>

using namespace std;


int N, M;
int need;
int ans = 1e6;
int cost[25];
int uu[35][25];
int needed[25];
int bought[25];

void set_bought(){
    for(int i = 1; i < N + 1; i++) bought[i] = 0;
}

void backtrack(int k, int money){
    if(money > ans) return;

    if(k == M){
        for(int i = 0; i < need; i++){
            if(bought[needed[i]] == 0) money += cost[needed[i]];
        }
        if(money < ans) ans = money;
        return;
    }

    for(int i = 0; i < 2; i++){
        if(i == 0){
            backtrack(k + 1, money);
        }else{
            for(int i = 2; i < 2 + uu[k][1]; i++) bought[uu[k][i]] += 1;
            backtrack(k + 1, money + uu[k][0]);
            for(int i = 2; i < 2 + uu[k][1]; i++) bought[uu[k][i]] -= 1;
        }
    }
}

int main(){
    freopen("inp.txt", "r", stdin);
    int test; cin >> test;

    for(int tc = 0; tc < test; tc++){
        ans = 1e6;
        cin >> N; for(int i = 1; i < N + 1; i++) cin >> cost[i];
        cin >> M;
        for(int i = 0; i < M; i++){
            cin >> uu[i][0] >> uu[i][1];
            for(int j = 2; j < 2 + uu[i][1]; j++) cin >> uu[i][j];
        }

        cin >> need;
        for(int i = 0; i < need; i++) cin >> needed[i];
        set_bought();
        backtrack(0, 0);
        cout << "#" << tc + 1 << " " << ans << endl;
    }

    return 0;
}