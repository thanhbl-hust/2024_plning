#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;


int main(){
    
    int test; cin >> test;

    for(int i = 0; i < test; i++){
        string s; cin >> s;
        int s1 = 0, s2 = 0;
        for(int i = 0; i < 3; i++) s1 += s[i] - '0';
        for(int i = 3; i < 6; i++) s2 += s[i] - '0';
        cout << (s1 == s2 ? "YES" : "NO") << endl;
    }

    return 0;
}