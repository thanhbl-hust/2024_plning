/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>

using namespace std;

void solve(){
  string s; cin >> s;
  int res = 0;
  for(int i = 0; i < s.size(); i++){
    if(isalpha(s[i])){
      if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') res += 1;
    }else{
      if(stoi(s.substr(i, 1)) % 2 == 1) res += 1;
    }
  }
  cout << res;
}

int main(){
  solve();
  return 0;
}