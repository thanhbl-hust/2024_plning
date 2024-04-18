/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>

using namespace std;

void solve(){
  

  vector<int> res;

  int n, k; cin >> n >> k;
  int a[n]; for(int i = 0; i < n; i++) cin >> a[i];
  vector<int> stt(n, 1);
  for(int i = 1; i < n; i++) stt[i] = stt[i - 1] + 1;

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n - 1 - i; j++){
      if(a[j] > a[j + 1]){
        int tmp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = tmp;
        tmp = stt[j];
        stt[j] = stt[j + 1];
        stt[j + 1] = tmp;
      }
    }
  }

  int st = 0;
  while(st < n){
    if(k < a[st]) break;
    k -= a[st];
    res.push_back(stt[st]);
    st += 1;
  }
  cout << res.size() << endl;
  for(int i = 0; i < res.size(); i++) cout << res[i] << " ";
}

int main(){
  solve();
  return 0;
}