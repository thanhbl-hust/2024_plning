#include<iostream>

using namespace std;

int ans = 0;
int N, W, w[15];

void backtrack(int k, int total){
    if(total > W) return;
    if(k == N){
        if(total > ans) ans = total;
        return;
    }

    backtrack(k + 1, total);
    backtrack(k + 1, total + w[k]);

}

int main(){
    freopen("inp.txt", "r", stdin);
    int test; cin >> test;

    for(int tc = 0; tc < test; tc++){
        ans = 0;
        cin >> W >> N;
        for(int i = 0; i < N; i++) cin >> w[i];
        backtrack(0, 0);
        cout << "Case #" << tc + 1 << " " << ans << endl;
    }

    return 0;
}