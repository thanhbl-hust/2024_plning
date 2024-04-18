#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){  
    int leng; string s; cin >> leng >> s;

    int ans = 0;

    for(int i = 0; i < leng; i++){
        if((s[i] - '0') % 2 == 0) ans += i + 1;
    }

    cout << ans;

    return 0;
}