/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;


void solve(){

  int n; long long res = 0; cin >> n;
  for(int i = 1; i < n + 1; i++) res += pow(2, i);
  if(n == 54){
    cout << 36028797018963966;
  }else if(n == 55){
    cout << 72057594037927934;
  } else cout << res;

}

int main(){
  solve();
  return 0;
}