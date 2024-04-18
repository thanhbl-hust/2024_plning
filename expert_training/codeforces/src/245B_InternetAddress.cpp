/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){

  string s; cin >> s;
  string res = "";
  if(s[0] == 'h'){
    for(int i = 0; i < 4; i++) res += s[i];
  }else for(int i = 0; i < 3; i++) res += s[i];
  res += "://";
  int st; bool found = false;
  if(s[0] == 'h'){
    st = 4;
  }else st = 3;

  while(st < s.size()){
    if(s[st] == 'r' and s[st + 1] == 'u' and found == false and res[res.size() - 1] != '/'){
      res += ".ru/";
      st += 2;
      found = true;
    }else{
      res += s[st];
      st += 1;
    }
  }

  if(res[res.size() - 1] == '/') res.pop_back();

  cout << res;

}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

  //run();

  solve();

  return 0;
}