/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;
int solve(int n){
  int st = 1;
  while(1){
    int leaf = n + st;
    string ss = to_string(leaf);
    if(count(ss.begin(), ss.end(), '8') > 0) return st;
    st += 1;
  }
  return -1;
}
void solve(){
  int n; cin >> n;
  cout << solve(n);
}
int main(){
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

  //run();

  solve();

  return 0;
}