/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>

using namespace std;

bool check(vector<int> a, int n){
  for(int i = 1; i < n + 1; i++){
    int first = a[i];
    int sec = a[first];
    int third = a[sec];
    //cout << first << " " << sec << " " << third << " " << i << endl;
    if(third == i) return true;
  }
  return false;
}

void solve(){
  int n; cin >> n; vector<int> a(5001);
  for(int i = 1; i < n + 1; i++) cin >> a[i];

  cout << (check(a, n) == true ? "YES" : "NO") << endl;
}

int main(){
  solve();
  return 0;
}