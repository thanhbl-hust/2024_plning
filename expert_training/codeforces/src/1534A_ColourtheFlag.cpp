/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;

bool found(vector<int> a, int index){
  for(int i = 0; i < a.size(); i++){
    if(a[i] == index) return true;
  }
  return false;
}

bool check(vector<int> W, vector<int> R){
  if(W.size() == 2 || R.size() == 2) return false;
  if(W.size() == 1 and R.size() == 1 and W[0] == R[0]) return false;
  return true;
}

void solve(){

  int t; cin >> t;
  while(t--){
    int n, m; cin >> n >> m; vector<string> flag(n);
    for(int i = 0; i < n; i++) cin >> flag[i];
    vector<int> W;
    vector<int> R;
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        if(flag[i][j] != '.'){
          if(flag[i][j] == 'W' and found(W, (i + j) % 2) == false){
            W.push_back((i + j) % 2);
          }else if(flag[i][j] == 'R' and found(R, (i + j) % 2) == false){
            R.push_back((i + j) % 2);
          }
        }
      }
    }
    if(check(W, R) == false){
      cout << "NO" << endl;
    }else{
      cout << "YES" << endl;

      if(W.size() == 0 and R.size() == 0){
        W.push_back(1);
        R.push_back(0);
      }else if(W.size() == 1 and R.size() == 0){
        R.push_back(1 - W[0]);
      }else if(W.size() == 0 and R.size() == 1){
        W.push_back(1 - R[0]);
      }

      for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
          if((i + j) % 2 == W[0]){
            flag[i][j] = 'W';
          }else flag[i][j] = 'R';
        }
      }

      for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
          cout << flag[i][j];
        }
        cout << endl;
      }
    }
  }
}

int main(){
  solve();
  return 0;
}