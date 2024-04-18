#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;


int main(){
    
    string s; cin >> s;

    int ans = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == toupper(s[i])) ans += 1;
    }

    if(ans > s.size() - ans){
        for(int i = 0; i < s.size(); i++) s[i] = toupper(s[i]);
    }else{
        for(int i = 0; i < s.size(); i++) s[i] = tolower(s[i]);
    }

    cout << s;

    return 0;
}