/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){

    vector<int> res;

    int n, sum = 0; cin >> n; vector<int> a(n); 
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    for(int i = 0; i < n; i++){
        if((sum - a[i]) % (n - 1) == 0 and (sum - a[i]) / (n - 1) == a[i]) res.push_back(i + 1);
    }
    cout << res.size() << endl;
    for(int i = 0; i < res.size(); i++) cout << res[i] << " ";
}

 int main(){

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    //run();

    solve();

    return 0;
}