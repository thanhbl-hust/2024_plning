/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>

using namespace std;

void solve(){
  int t; cin >> t;
  while(t--){
    int length; cin >> length;
    vector<vector<int>> s(length, vector<int> (2));
    for(int i = 0; i < length; i++){
      for(int j = 0; j < 2; j++){
        cin >> s[i][j];
      }
    }
    int cnt = 0;
    for(int i = 1; i < length; i++){
      if(s[i][0] >= s[0][0] and s[i][1] >= s[0][1]) cnt += 1;
    }
    if(cnt != 0){
      cout << -1 << endl;
    }else{
      cout << s[0][0] << endl;
    }
  }
}

int main(){
  solve();
  return 0;
}