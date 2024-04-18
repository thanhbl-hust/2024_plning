/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>

using namespace std;
int next(int n, int limit){
  if(n == limit - 1) return 0;
  return n + 1;
}

void solve(){
  int n, m; cin >> n >> m;
  string a[n]; 
  string b[m];
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < m; i++) cin >> b[i];
  vector<string> hold;
  int xx = 0;
  int yy = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      string res = a[xx] + b[yy];
      hold.push_back(res);
      xx = next(xx, n);
      yy = next(yy, m);
    }
  }

  int t; cin >> t;
  while(t--){
    int index; cin >> index;
    if(index % hold.size() == 0){
      cout << hold[hold.size() - 1] << endl;
    }else cout << hold[index % hold.size() - 1] << endl;
  }
}

int main(){
  solve();
  return 0;
}