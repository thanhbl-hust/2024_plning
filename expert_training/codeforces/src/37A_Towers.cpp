#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){

    int arr[1005];

    for(int i = 0; i < 1005; i++) arr[i] = 0;

    int N; cin >> N; 
    for(int i = 0; i < N; i++){
        int n; cin >> n; arr[n] += 1;
    }

    int maxVal = -1, ans = 0;

    for(int i = 1; i < 1001; i++){
        if(arr[i] > maxVal){
            maxVal = arr[i];
        }
        if(arr[i] != 0) ans += 1;
    }

    cout << maxVal << " " << ans << endl;

    return 0;
}