/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;

bool check(vector<vector<int>> a){
    for(int i = 0; i < 3; i++){
        if(a[0][i] == a[1][i]) return true;
    }
    return false;
}

void solve(){
    vector<vector<int>> a(2, vector<int> (3));
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }
    cout << (check(a) == true ? "YES" : "NO") << endl;
}

 int main(){

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    //run();

    solve();

    return 0;
}