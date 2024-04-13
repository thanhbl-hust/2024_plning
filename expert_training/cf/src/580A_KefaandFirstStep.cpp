#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int arr[100005];

int main(){
    
    int n; cin >> n; for(int i = 0; i < n; i++) cin >> arr[i];

    vector<int> dp(n, 1);

    for(int i = 1; i < n; i++){
        if(arr[i] >= arr[i - 1]){
            dp[i] = dp[i - 1] + 1;
        }
    }

    int ans =  1;
    for(int i = 0; i < n; i++) ans = max(ans, dp[i]);
    cout << ans;
    
    return 0;
}