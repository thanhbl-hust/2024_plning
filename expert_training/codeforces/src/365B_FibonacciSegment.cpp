/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n; cin >> n; vector<int> a(n); vector<int> dp(n, 2);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 2; i < n; i++){
        if(a[i - 2] + a[i - 1] == a[i] and dp[i] < dp[i - 1] + 1){
            dp[i] = dp[i - 1] + 1;
        }
    }
    int maxv = *max_element(dp.begin(), dp.end());
    cout << (n == 1 ? 1 : maxv) << endl;
}

 int main(){

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    //run();

    solve();

    return 0;
}