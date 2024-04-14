#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){

    int length; string s; cin >> length >> s;

    string ans = "";

    ans += s[0];

    for(int i = 1; i < length; i++){
        if(s[i] != ans[ans.size() - 1]) ans += s[i];
    }

    cout << length - ans.size();

    return 0;
}