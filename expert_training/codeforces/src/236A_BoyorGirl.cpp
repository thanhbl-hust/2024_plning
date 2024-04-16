#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

vector<char> cc;

bool find(char c){
    for(int i = 0; i < cc.size(); i++){
        if(cc[i] == c) return true;
    }
    return false;
}

int main(){
    string s; cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(!find(s[i])) cc.push_back(s[i]);
    }

    cout << (cc.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;

    return 0;
}