#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;


int main(){
    
    int n, sum; cin >> n;

    int arr[4] = {0, 0, 0, 0};

    for(int i = 0; i < n; i++){
        cin >> sum; arr[sum] += 1;
    }

    cout << n - max(arr[1], max(arr[2], arr[3]));

    return 0;
}