/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>

using namespace std;

void solve(){

  int length; cin >> length; string s; cin >> s;
  int coor[length]; for(int i = 0; i < length; i++) cin >> coor[i];

  int minVal = INT_MAX;

  for(int i = 0; i < length - 1; i++){
    if(s[i] == 'R' and s[i + 1] == 'L'){
      minVal = min(minVal, coor[i + 1] - coor[i]);
    }
  }

  cout << (minVal == INT_MAX ? -1 : minVal / 2) << endl;


}

int main(){
  solve();
  return 0;
}