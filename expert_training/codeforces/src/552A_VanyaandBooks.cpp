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

long long counting(long long n){
  if(n <= 9) return n;
  if(n <= 99) return 9 + (n - 10 + 1) * 2;
  if(n <= 999) return 9 + (99 - 10 + 1) * 2 + (n - 100 + 1) * 3;
  if(n <= 9999) return 9 + (99 - 10 + 1) * 2 + (999 - 100 + 1) * 3 + (n - 1000 + 1) * 4;
  if(n <= 99999) return 9 + (99 - 10 + 1) * 2 + (999 - 100 + 1) * 3 + (9999 - 1000 + 1) * 4 + (n - 10000 + 1) * 5;
  if(n <= 999999) return 9 + (99 - 10 + 1) * 2 + (999 - 100 + 1) * 3 + (9999 - 1000 + 1) * 4 + (99999 - 10000 + 1) * 5 + (n - 100000 + 1) * 6;
  if(n <= 9999999) return 9 + (99 - 10 + 1) * 2 + (999 - 100 + 1) * 3 + (9999 - 1000 + 1) * 4 + (99999 - 10000 + 1) * 5 + (999999 - 100000 + 1) * 6 + (n - 1000000 + 1) * 7;
  if(n <= 99999999) return 9 + (99 - 10 + 1) * 2 + (999 - 100 + 1) * 3 + (9999 - 1000 + 1) * 4 + (99999 - 10000 + 1) * 5 + (999999 - 100000 + 1) * 6 + (9999999 - 1000000 + 1) * 7 + (n - 10000000 + 1) * 8;
  if(n <= 999999999) return 9 + (99 - 10 + 1) * 2 + (999 - 100 + 1) * 3 + (9999 - 1000 + 1) * 4 + (99999 - 10000 + 1) * 5 + (999999 - 100000 + 1) * 6 + (9999999 - 1000000 + 1) * 7 + (99999999 - 10000000 + 1) * 8 + (n - 100000000  + 1) * 9;
  if(n == 1000000000) return 8888888899;

}

void solve(){
  long long n; cin >> n; cout << counting(n) << endl;
}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

  //run();

  solve();

  return 0;
}