/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(string s){
  string ss = s;
  reverse(ss.begin(), ss.end());
  if(s == ss) return true;
  return false;
}

bool check(string s){
  int cnt = 0;
  int l = 0, r = s.size() - 1;
  while(l <= r){
    if(s[l] != s[r]) cnt += 1;
    l += 1;
    r -= 1;
  }
  if(cnt == 1) return true;
  if(cnt == 0){
    if(isPalindrome(s) == true and s.size() % 2 == 1) return true;
  }
  return false;
}

void solve(){
  string s; cin >> s; cout << (check(s) == true ? "YES" : "NO") << endl;
  // int n; cin >> n; cout << sol(n) << endl;
}

int main(){
  solve();
  return 0;
}