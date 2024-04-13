#include<iostream>

using namespace std;

int N;
int ans = 1e9;
int bridge[20][2];

void backtrack(int k, int use, int a1, int a2, int a3){
    if(use > ans) return;
    if(k == N){
        if(use < ans) ans = use;
        return;
    }
    backtrack(k + 1, use + bridge[k][1], a1, a2, a3);
    backtrack(k + 1, use + 2 * bridge[k][1], a1 + bridge[k][0], a2, a3);
    if(a1 + a2 + a3 >= bridge[k][0]){
        int enemy = bridge[k][0];
        if(enemy <= a3){
            backtrack(k + 1, use, 0, a1, a2);
        }else if(enemy <= a2 + a3){
            backtrack(k + 1, use, 0, a1, a2 - (enemy - a3));
        }else{
            backtrack(k + 1, use, 0, a1 - (enemy - a2 - a3), 0);
        }
    }
}

int main(){
    freopen("inp.txt", "r", stdin);
    int test; cin >> test;

    for(int tc = 0; tc < test; tc++){
        ans = 1e9;
        cin >> N;
        for(int i = 0; i < N; i++) cin >>bridge[i][0] >> bridge[i][1];
        backtrack(0, 0, 0, 0, 0);
        cout << "#" << tc + 1 << " " << ans << endl;
    }

    return 0;
}