/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n; cin >> n; int a[n]; 
  float sum = 0;
  for(int i = 0; i < n; i++){
    cin >> a[i];
    sum += a[i];
  }
  sort(a, a + n);
  int bonus = 0;
  while(sum / n < 4.5){
    sum += 5 - a[bonus];
    bonus += 1;
  }
  cout << bonus;
}
int main(){
  solve();
  return 0;
}