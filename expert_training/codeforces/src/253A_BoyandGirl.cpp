#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int boy, girl; cin >> boy >> girl;
    string r;
    if(boy >= girl){
        r = "BG";
    }else r = "GB";

    while(boy > 0 && girl > 0){
        cout << r;
        boy -= 1;
        girl -= 1;
    }

    while(boy > 0){
        cout << 'B';
        boy -= 1;
    }

    while(girl > 0){
        cout << 'G';
        girl -= 1;
    }

    return 0;
}