#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int solve(int n){
    int ans = 0;
    vector<int> dg;
    while(n != 0){
        if(n % 10 != 0) dg.push_back(n % 10);
        n /= 10;
    }

    for(int i = 0; i < dg.size(); i++) ans += dg[i] * pow(10, i);

    return ans;
}

int main(){
    
    int a, b; cin >> a >> b;

    cout << (solve(a) + solve(b) == solve(a + b) ? "YES" : "NO") << endl;

    return 0;
}