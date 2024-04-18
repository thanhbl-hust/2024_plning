/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>

using namespace std;

void solve(){
  int n, c1 = 0, c2 = 0;
  cin >> n;
  for(int i = 0; i < n; i++){
    int index; cin >> index;
    if(index == 1){
      c1 += 1;
    }else c2 += 1;
  }
  int res = min(c1, c2);
  c1 -= res;
  c2 -= res;
  cout << res + c1 / 3;
}

int main(){
  solve();
  return 0;
}