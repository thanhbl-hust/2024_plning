#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;


int main(){ 
    int v[100005];

    int n; cin >> n;
    for(int i = 1; i < n + 1; i++) v[i] = 0;

    for(int i = 0; i < n - 1; i++){
        int s; cin >> s; v[s] = 1;
    }

    int st = 1;
    while(v[st] == 1) st += 1;

    cout << st;

    return 0;
}