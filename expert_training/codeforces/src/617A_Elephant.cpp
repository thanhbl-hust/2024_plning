#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){
    int n, ans = 0; cin >> n;

    int st = 5;

    while(st > 0){
        int step = n / st;
        ans += n / st;
        n -= st * (n / st);
        st -= 1;
    }

    cout << ans << endl;

    return 0;
}