#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;
vector<string> mp;

int op(int n){
    if(n == 1) return 1;
    return 2 - n;
}

bool check(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            int ii = op(i), jj = op(j);
            if(mp[i][j] != mp[ii][jj]) return false;
        }
    }
    return true;
}

int main(){

    for(int i = 0; i < 3; i++){
        string s; cin >> s; mp.push_back(s);
    }

    cout << (check() == true ? "YES" : "NO") << endl;
    
    return 0;
}