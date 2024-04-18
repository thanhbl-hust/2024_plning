/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
  int maxv = INT_MIN;
  int n; cin >> n; int a[n]; vector<int> dp(n, 1); 
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 1; i < n; i++){
    if(a[i] == a[i - 1]){
      dp[i] = dp[i - 1] + 1;
    }
  }

  vector<int> length;
  for(int i = 0; i < dp.size() - 1; i++){
    if(dp[i + 1] == 1) length.push_back(dp[i]);
  }
  length.push_back(dp[dp.size() - 1]);
  for(int i = 0; i < length.size() - 1; i++){
    maxv = max(maxv, 2 * (min(length[i], length[i + 1])));
  }

  cout << maxv;

}

int main(){
  solve();
  return 0;
}