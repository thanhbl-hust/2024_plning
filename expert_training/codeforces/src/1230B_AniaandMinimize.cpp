/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n, k; cin >> n >> k; string s; cin >> s;
  int st = 0;
  int change = 0;
  while(st < s.size() and change < k){
    if(st == 0){
      if(s.size() == 1){
        if(s[st] != '0'){
          s[st] = '0';
          change += 1;
        }
      }else{
        if(s[st] != '1'){
          s[st] = '1';
          change += 1;
        }
      }
    }else{
      if(s[st] != '0'){
        change += 1;
        s[st] = '0';
      }
    }
    st += 1;
  }
  cout << s;
}
int main(){

  solve();

  return 0;
}