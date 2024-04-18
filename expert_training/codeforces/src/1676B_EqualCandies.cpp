#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){    
    int test; cin >> test;
    for(int tc = 0; tc < test; tc++){
        int leng; cin >> leng;
        vector<int> ls(50);
        for(int i = 0; i < leng; i++) cin >> ls[i];
        int minVal = ls[0];
        for(int i = 1; i < leng; i++) minVal = min(minVal, ls[i]);
        int ans = 0;
        for(int i = 0; i < leng; i++) ans += ls[i] - minVal;
        cout << ans << endl;
    }

    return 0;
}