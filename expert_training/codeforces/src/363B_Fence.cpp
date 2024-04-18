#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){
    int n, k; cin >> n >> k; 
    int arr[150005];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int sum[150005];
    for(int i = 0; i < n; i++) sum[i] = arr[i];
    for(int i = 1; i < n; i++) sum[i] += sum[i - 1];

    int minVal = 0, minSum = sum[k - 1];

    for(int i = 1; i < n - k + 1; i++){
        if(sum[i + k - 1] - sum[i - 1] < minSum){
            minVal = i;
            minSum = sum[i + k - 1] - sum[i - 1];
        }
    }
    
    cout <<  minVal + 1; 

    return 0;
}