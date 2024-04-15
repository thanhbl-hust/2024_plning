#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;


int main(){

    freopen("inp.txt", "r", stdin);

    int test; cin >> test;

    for(int i = 0; i < test; i++){
        string s; cin >> s; cout << (s[0] - '0') + (s[2] - '0') << endl;
    }

    return 0;
}