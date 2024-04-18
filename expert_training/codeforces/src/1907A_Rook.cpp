/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;

string charac[8] = {"a", "b", "c", "d", "e", "f", "g", "h"};
string numb[8] = {"1", "2", "3", "4", "5", "6", "7", "8"};

void solve(){
  int t; cin >> t;
  while(t--){
    string s; cin >> s;
    vector<string> ss;

    for(int i = 0; i < 8; i++){
      ss.push_back(charac[i] + s[1]);
    }

    for(int i = 0; i < 8; i++){
      ss.push_back(s[0] + numb[i]);
    }

    for(int i = 0; i < ss.size(); i++){
      if(ss[i] != s) cout << ss[i] << endl;
    }
  }
}

int main(){
  solve();
  return 0;
}