#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;


int main(){

    int ans = 0;
    int pol = 0;

    int n; cin >> n;

    for(int i = 0; i < n; i++){
        int t; cin >> t;
        if(t != -1){
            pol += t;
        }else{
            if(pol == 0){
                ans += 1;
            }else pol -= 1;
        }
    }

    cout << ans;
    
    return 0;
}