#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

string madeString(string s, int st, int leng){
    string ans = "";
    for(int i = st; i < st + leng; i++) ans += s[i];
    return ans;
}

int cnt(string a, string b){
    int ans = 0;
    for(int i = 0; i < a.size() - b.size() + 1; i++){
        string cc = madeString(a, i, b.size());
        if(cc == b) ans += 1;
    }
    return ans;
}

int main(){
    string s; cin >> s;

    int st = s.size() - 1;

    while(st > 0){
        bool found = false;
        for(int i = 0; i < s.size() - st + 1; i++){
            string cc = madeString(s, i, st);
            if(cnt(s, cc) >= 2){
                found = true;
                break;
            }
        }
        if(found) break;
        st -= 1;
    }
    cout << st;
    return 0;
}