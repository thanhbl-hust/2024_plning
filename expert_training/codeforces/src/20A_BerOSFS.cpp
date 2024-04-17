#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){
    string s; cin >> s;

    vector<char> ans;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '/' && ans.size() != 0 && ans[ans.size() - 1] == '/') continue;
        ans.push_back(s[i]);
    }

    while(ans[ans.size() - 1] == '/' && ans.size() != 1) ans.pop_back();
    for(int i = 0; i < ans.size(); i++) cout << ans[i];
    
    return 0;
}