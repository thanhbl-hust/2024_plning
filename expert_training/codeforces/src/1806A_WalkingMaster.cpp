/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>

using namespace std;

int run(int x1, int y1, int x2, int y2){
  if(y1 == y2 and x2 <= x1) return x1 - x2;
  if(x2 - x1 == y2 - y1 and x2 - x1 >= 0) return x2 - x1;
  if(y2 < y1) return -1;
  if(y1 == y2 and x2 > x1) return -1;
  if(x2 > x1 and x2 - x1 > y2 - y1) return -1;
  int bonus = y2 - y1;
  y1 += bonus;
  x1 += bonus;
  return bonus + x1 - x2;
}

void solve(){
  int t; cin >> t;
  while(t--){
    int a, b, c, d; cin >> a >> b >> c >> d;
    cout << run(a, b, c, d) << endl;
  }
}

int main(){
  solve();
  return 0;
}