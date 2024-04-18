/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>

using namespace std;

void solve(){
  int xx, yy;
  int n; cin >> n;
  int x = 1, y = n - 1;
  float res = x / y;
  while(x < y){
    if(__gcd(x, y) == 1){
      res = x/y;
      xx = x;
      yy = y;
    }
    x += 1;
    y -= 1;
  }

  cout << xx << " " << yy;
}

int main(){
  solve();
  return 0;
}