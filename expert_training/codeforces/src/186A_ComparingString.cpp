/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;

int solve(int n){
  int st = 1;
  while(1){
    int leaf = n + st;
    string ss = to_string(leaf);
    if(count(ss.begin(), ss.end(), '8') > 0) return st;
    st += 1;
  }
  return -1;
}

bool check(string a, string b){
  if(a.size() != b.size()) return false;
  vector<int> dif;
  int st = 0;
  while(st < a.size()){
    if(a[st] != b[st]) dif.push_back(st);
    st += 1;
  }
  if(dif.size() != 2) return false;
  if(a[dif[0]] == b[dif[1]] and b[dif[0]] == a[dif[1]]) return true;
  return false;
}

void solve(){
  string a, b; cin >> a >> b; cout << (check(a, b) == true ? "YES" : "NO") << endl;
}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

  //run();

  solve();

  return 0;
}