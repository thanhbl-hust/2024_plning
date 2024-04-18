/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
  int t, minv = INT_MAX; cin >> t;
  while(t--){
    int index; cin >> index;
    minv = min(minv, abs(index));
  }
  cout << minv;
}

int main(){
  solve();
  return 0;
}