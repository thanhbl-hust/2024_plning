/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n, m; cin >> n >> m;
  int al = 0, ac = 0, bl = 0, bc = 0;
  for(int i = 0; i < n; i++){
    int index; cin >> index;
    if(index % 2 == 0){
      ac += 1;
    }else al += 1;
  }
  for(int i = 0; i < m; i++){
    int index; cin >> index;
    if(index % 2 == 0){
      bc += 1;
    }else bl += 1;
  }
  cout << min(al, bc) + min(ac, bl) << endl;
}

int main(){
  solve();
  return 0;
}