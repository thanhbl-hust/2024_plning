#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){
    int arr[2005];
    int n, d, ans = 0; cin >> n >> d;

    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 1; i < n; i++){
        if(arr[i] <= arr[i - 1]){
            int dis = arr[i - 1] - arr[i];
            arr[i] += ((dis / d) + 1) * d;
            ans += dis / d + 1;
        }
    }

    cout << ans << endl;

    return 0;
}