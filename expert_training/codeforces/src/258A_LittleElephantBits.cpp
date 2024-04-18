/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;


void solve(){

  string s; cin >> s;

  if(count(s.begin(), s.end(), '0') == 0){
    s.pop_back();
    cout << s;
  }else{
    int st = 0;
    while(s[st] != '0') st += 1;
    s.erase(s.begin() + st);
    cout << s;
  }
}

int main(){
  solve();
  return 0;
}