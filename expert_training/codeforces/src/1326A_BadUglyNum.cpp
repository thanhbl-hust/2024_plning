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
    int n; cin >> n;
    if(n == 1){
      cout << -1 << endl;
    }else{
      cout << '2';
      for(int i = 0; i < n - 1; i++) cout << '3';
      cout << endl;
    }
  }
}

int main(){
  solve();
  return 0;
}