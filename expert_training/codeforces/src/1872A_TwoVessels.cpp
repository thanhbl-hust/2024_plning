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
    int a, b, c; cin >> a >> b >> c;
    int dis = abs(a - b);
    if(dis % (2 * c) == 0){
      cout << dis / (2 * c) << endl;
    }else cout << dis / (2 * c) + 1 << endl;
  }
}

int main(){
  solve();
  return 0;
}