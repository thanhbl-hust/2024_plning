#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){

    int n; cin >> n; int arr[101];
    for(int i = 1; i < n; i++) cin >> arr[i];

    int a, b, ans = 0; cin >> a >> b;

    while(a < b){
        ans += arr[a];
        a += 1;
    }

    cout << ans;

    return 0;
}