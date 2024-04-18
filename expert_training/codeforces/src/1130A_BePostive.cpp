/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>

using namespace std;
void solve(){

  int neg = 0, pos = 0;

  int n; cin >> n; 
  for(int i = 0; i < n; i++){
    int index; cin >> index;
    if(index > 0){
      pos += 1;
    }else if(index < 0){
      neg += 1;
    }
  }

  if(pos >= (n + n % 2) / 2){
    cout << 1;
  }else if(neg >= (n + n % 2) / 2){
    cout << -1;
  }else cout << 0;
}

int main(){
  solve();
  return 0;
}