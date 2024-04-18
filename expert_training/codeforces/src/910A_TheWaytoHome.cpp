/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> coor, int d){
  for(int i = 1; i < coor.size(); i++){
    if(coor[i] - coor[i - 1] > d) return false;
  }
  return true;
}

int running(vector<int> a, int d){
  int step = 0;
  int current = 0;
  while(current != a.size() - 1){
    step += 1;
    int root = a[current];
    while(a[current + 1] <= root + d and current < a.size() - 1){
      current += 1;
    }
  }
  return step;
}

void solve(){

  int n, d; cin >> n >> d; string s; cin >> s;
  vector<int> coor;
  for(int i = 0; i < n; i++){
    if(s[i] == '1') coor.push_back(i);
  }
  cout << (check(coor, d) == true ? running(coor, d) : -1) << endl;

}

int main(){
  solve();
  return 0;
}