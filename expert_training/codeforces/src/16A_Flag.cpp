#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int n, m;
vector<string> flag;

bool check(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(flag[i][j] != flag[i][0]) return false;
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 1; j < n; j++){
            if(flag[j][i] == flag[j - 1][i]) return false;
        }
    }
    return true;
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        string s; cin >> s; flag.push_back(s);
    }

    cout << (check() == true ? "YES" : "NO") << endl;
    
    return 0;
}