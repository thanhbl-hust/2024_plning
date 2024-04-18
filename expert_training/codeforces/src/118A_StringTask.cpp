#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

char cc[6] = {'a', 'o', 'u', 'e', 'i', 'y'};

bool find(char c){
    c = tolower(c);
    for(int i = 0; i < 6; i++){
        if(cc[i] == c) return true;
    }
    return false;
}

int main(){
    
    string s; cin >> s;

    vector<char> ans;

    for(int i = 0; i < s.size(); i++){
        if(!find(s[i])){
            s[i] = tolower(s[i]);
            cout << '.' << s[i];
        }
    }

    return 0;
}