/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>

using namespace std;

int count(string s, int cnt){
  if(cnt == 0){
    if(s[0] != '0') return 1;
    return 0;
  }
  if(s[0] == '0') return 0;
  if(s[0] == '?') return pow(10, cnt - 1) * 9;
  return pow(10, cnt);
}

void solve(){

  int t; cin >> t;
  while(t--){
    string s; cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
      if(s[i] == '?') cnt += 1;
    }
    cout << count(s, cnt) << endl;
  }
}

int main(){
  solve();
  return 0;
}