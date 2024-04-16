#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;


int main(){
    int n, m; cin >> n >> m;

    vector<string> mp;

    for(int i = 0; i < n; i++){
        string s; cin >> s; mp.push_back(s);
    }

    int leftCol = 0, rightCol = m - 1, upRow = 0, downRow = n - 1;

    while(leftCol < m){
        bool found = false;
        for(int i = 0; i < n; i++){
            if(mp[i][leftCol] == '*'){
                found = true;
                break;
            }
        }
        if(found) break;
        leftCol += 1;
    }

    while(upRow < n){
        bool found = false;
        for(int j = 0; j < m; j++){
            if(mp[upRow][j] == '*'){
                found = true;
                break;
            }
        }
        if(found) break;
        upRow += 1;
    }

    while(rightCol >= 0){
        bool found = false;
        for(int i = 0; i < n; i++){
            if(mp[i][rightCol] == '*'){
                found = true;
                break;
            }
        }
        if(found) break;
        rightCol -= 1;
    }

    while(downRow >= 0){
        bool found = false;
        for(int j = 0; j < m; j++){
            if(mp[downRow][j] == '*'){
                found = true;
                break;
            }
        }
        if(found) break;
        downRow -= 1;
    }

    for(int i = upRow; i < downRow + 1; i++){
        for(int j = leftCol; j < rightCol + 1; j++){
            cout << mp[i][j];
        }
        cout << endl;
    }
    
    return 0;
}