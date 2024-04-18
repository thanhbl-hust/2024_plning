/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> a, int div){
  int cnt = 0;
  for(int i = 0; i < a.size(); i++){
    if(a[i] % div == 0) cnt += 1;
  }
  if(cnt == a.size()) return true;
  return false;
}

void solve(){

  int n; cin >> n; vector<int> a(n); for(int i = 0; i < n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  int minv = a[0];

  while(minv > 0){
    if(check(a, minv) == true) break;
    minv -= 1;
  }

  cout << minv * n;

}

int main(){
  solve();
  return 0;
}