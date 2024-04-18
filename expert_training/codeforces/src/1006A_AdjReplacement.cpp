/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>

using namespace std;


void solve(){

  int n; cin >> n; vector<int> a(n);

  for(int i = 0; i < n; i++){
    cin >> a[i];
    a[i] -= (1 - a[i] % 2);
  }

  for(int i = 0; i < n; i++) cout << a[i] << " ";
}

int main(){
  solve();
  return 0;
}