/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;

bool check(int c100, int c200, int sum){
  for(int i = 0; i < c100 + 1; i++){
    for(int j = 0; j < c200 + 1; j++){
      if(i * 100 + j * 200 == sum) return true;
    }
  }
  return false;
}

void solve(){


  int n; cin >> n; int a[n]; int sum = 0, c100 = 0;
  for(int i = 0; i < n; i++){
    cin >> a[i];
    sum += a[i];
    if(a[i] == 100) c100 += 1;
  }

  cout << (check(c100, n - c100, sum / 2) == true ? "YES" : "NO") << endl;

int main(){
  solve();
  return 0;
}