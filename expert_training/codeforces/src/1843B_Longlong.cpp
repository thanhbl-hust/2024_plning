/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;


void solve(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n; vector<int> a(n); for(int i = 0; i < n; i++) cin >> a[i];
    long long sum = 0; for(int i = 0; i < n; i++) sum += abs(a[i]);
    int cnt = 0;
    int st = 0;
    while(st < n){
      if(a[st] < 0){
        while(a[st + 1] <= 0) st += 1;
        cnt += 1;
      }
      st += 1;
    }
    cout << sum << " " << cnt << endl;
  }
}

int main(){
  solve();
  return 0;
}