#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;


int main(){
    
    int leng; string s; cin >> leng >> s;

    int c0 = 0, c1 = 0;

    for(int i = 0; i < leng; i++){
        if(s[i] == 'n') c1 += 1;
        if(s[i] == 'z') c0 += 1;
    }

    for(int i = 0; i < c1; i++) cout << 1 << " ";
    for(int i = 0; i < c0; i++) cout << 0 << " ";

    return 0;
}