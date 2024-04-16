#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){
    int test; cin >> test;
    for(int i = 0; i < test; i++){
        int ans = -1;

        int s; cin >> s;
        if(s >= 1900) ans = 1;
        if(s >= 1600 && s < 1900) ans = 2;
        if(s >= 1400 && s < 1600) ans = 3;
        if(s < 1400) ans = 4;

        cout << "Division " << ans << endl;
    }

    return 0;
}