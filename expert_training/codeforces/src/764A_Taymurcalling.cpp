/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>

using namespace std;

void solve(){
  int n, m, z; cin >> n >> m >> z; int root = m;
  int cnt = 0;
  while(m <= z){
    if(m % n == 0) cnt += 1;
    m += root;
  }
  cout << cnt;
}

int main(){
  solve();
  return 0;
}