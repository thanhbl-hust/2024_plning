/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>

using namespace std;

int find(vector<string> ss, string s){
  for(int i = 0; i < ss.size(); i++){
    if(ss[i] == s) return i;
  }
  return -1;
}

void solve(){


  int n, k; cin >> n >> k;

  int a[n]; for(int i = 0; i < n; i++) cin >> a[i]; sort(a, a + n);

  vector<string> name;
  vector<int> count;

  for(int i = 0; i < k; i++){
    string s; cin >> s;
    if(find(name, s) == -1){
      name.push_back(s);
      count.push_back(1);
    }else count[find(name, s)] += 1;
  }


  sort(count.begin(), count.end());
  reverse(count.begin(), count.end());
  int minv = 0, maxv = 0;
  for(int i = 0; i < count.size(); i++) minv += count[i] * a[i];
  reverse(a, a + n);
  for(int i = 0; i < count.size(); i++) maxv += count[i] * a[i];

  cout << minv << " " << maxv;

}

int main(){
  solve();
  return 0;
}