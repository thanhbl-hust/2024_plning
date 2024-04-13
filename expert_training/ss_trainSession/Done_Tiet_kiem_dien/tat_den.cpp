#include<iostream>

using namespace std;


int N, K;
int ans = 0;
int arr[105];

int dem(){
    int cnt = 0;
    for(int i = 1; i < N + 1; i++) cnt += 1 - arr[i];
    return cnt;
}

void backtrack(int k, int pick){
    if(pick > 3) return;
    if(pick == 3 || k == K + 1){
        if(dem() > ans) ans = dem();
        return;
    }

    if(dem() > ans) ans = dem();

    for(int i = 0; i < 2; i++){
        if(i == 0){
            backtrack(k + 1, pick);
        }else{
            int st = 0;
            while(k + st * (k + 1) < N + 1){
                arr[k + st * (k + 1)] = 1 - arr[k + st * (k + 1)];
                st += 1;
            }
            backtrack(k + 1, pick + 1);
            st = 0;
            while(k + st * (k + 1) < N + 1){
                arr[k + st * (k + 1)] = 1 - arr[k + st * (k + 1)];
                st += 1;
            }
        }
    }
}

int main(){

    freopen("inp.txt", "r", stdin);

    int test; cin >> test;

    for(int tc = 0; tc < test; tc++){
        ans = 0;
        cin >> N >> K; for(int i = 1; i < N + 1; i++) cin >> arr[i];
        backtrack(1, 0);
        cout << "#" << tc + 1 << " " << ans << endl;
    }

    return 0;
}