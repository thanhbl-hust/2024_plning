#include<iostream>

using namespace std;

int arr[1005][3];

int main(){

    int ans = 0;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1) cnt += 1;
        }
        if(cnt > 1) ans += 1;
    }

    cout << ans << endl;

    return 0;
}