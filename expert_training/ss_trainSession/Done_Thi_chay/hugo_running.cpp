#include<iostream>
using namespace std;

int E, D;
int ans = 1e9;

int typeRun[5][2];

void backtrack(int k, int e, int d, int t){
    if(t > ans) return;
    if(e < 0) return;
    if(k == 5){
        if(t < ans) ans = t;
        return;
    }
    if(k == 4){
        backtrack(k + 1, e - d * typeRun[k][1], 0, t + d * typeRun[k][0]);
    }else{
        for(int i = 0; i < d + 1; i++){
            backtrack(k + 1, e - i * typeRun[k][1], d - i, t + i * typeRun[k][0]);
        }
    }
}

int main(){

    freopen("inp.txt", "r", stdin);

    int test; cin >> test;

    for(int tc = 0; tc < test; tc++){
        ans = 1e9;
        cin >> E >> D;
        for(int i = 0; i < 5; i++){
            int m, s; cin >> m >> s >> typeRun[i][1];
            typeRun[i][0] = 60 * m + s;
        }

        backtrack(0, E, D, 0);


        cout << "Case #" << tc + 1 << endl << ans / 60 << " " << ans % 60 << endl;
    }

    return 0;
}