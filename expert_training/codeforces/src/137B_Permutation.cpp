/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, res = 0; cin >> n; vector<int> a(5005, 0);
    for(int i = 0; i < n; i++){
        int index; cin >> index; a[index] += 1;
    }
    for(int i = 0; i < n; i++){
        if(a[i + 1] == 0) res += 1;
    }
    cout << res;
}

 int main(){

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    //run();

    solve();

    return 0;
}