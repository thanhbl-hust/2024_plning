#include<bits/stdc++.h>
#include<stdio.h>


using namespace std;


int main(){

    string s; cin >> s;

    vector<int> dp(105, 1);

    for(int i = 0; i < s.size(); i++) dp[i] = 1;

    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i - 1]){
            dp[i] = dp[i - 1] + 1;
        }
    }

    int maxVal = -1;
    for(int i = 0; i < s.size(); i++) maxVal = max(maxVal, dp[i]);
    if(maxVal > 6){
        cout << "YES";
    }else cout << "NO";

    return 0;
}