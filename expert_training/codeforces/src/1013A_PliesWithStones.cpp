/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>

using namespace std;


void solve(){
  int n, index, suma = 0, sumb = 0; cin >> n;
  for(int i = 0; i < n; i++){
    cin >> index; suma += index;
  }
  for(int i = 0; i < n; i++){
    cin >> index; sumb += index;
  }
  cout << (suma < sumb ? "NO" : "YES") << endl;

}

int main(){
  solve();
  return 0;
}