/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n, m; cin >> n >> m;
  if(n == 0){
    if(m != 0){
      cout << "Impossible";
    }else cout << "0 0";
  }else{
    int minv = n, maxv = n;
    minv += max(0, m - n);
    maxv += max(0, m - 1);
    cout << minv << " " << maxv;
  }
}

int main(){
  solve();
  return 0;
}