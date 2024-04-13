#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int cnt[5] = {0, 0, 0, 0, 0};

int main(){
    int ans = 0;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int m; cin >> m; cnt[m] += 1;
    }

    ans += cnt[3] + cnt[4] + cnt[2] / 2;
    ans += cnt[2] % 2;
    cnt[1] -= cnt[3] + 2 * (cnt[2] % 2);

    if(cnt[1] > 0){
        ans += cnt[1] / 4;
        cnt[1] -= 4 * (cnt[1] / 4);
    }
    if(cnt[1] > 0) ans += 1;
    cout << ans << endl;

    return 0;
}