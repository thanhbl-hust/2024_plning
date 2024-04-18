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
    string s; cin >> s;
    int st = 0;
    while(st < s.size()){
      if(s[st] == '1' || s[st] == '3') break;
      st += 1;
    }
    if(s[st] == '1'){
      cout << "13" << endl;
    }else cout << "31" << endl;
  }
}

int main(){
  solve();
  return 0;
}