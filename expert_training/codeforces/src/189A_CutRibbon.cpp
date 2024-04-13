#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){
    
    int ans = 0;
    int n, a, b, c; cin >> n >> a >> b >> c;

    for(int i = 0; i * a <= n; i++){
        for(int j = 0; a * i + b * j <= n; j++){
            if((n - a * i - b * j) % c == 0){
                if(i + j + (n - a * i - b * j) / c > ans){
                    ans = i + j + (n - a * i - b * j) / c;
                }
            }
        }
    }

    cout << ans;

    return 0;
}