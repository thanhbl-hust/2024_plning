#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){
    int arr[105];
    int n; cin >> n; for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    int st = 0;
    while(arr[st] == arr[0]) st += 1;

    if(st >= n){
        cout << "NO" << endl;
    }else cout << arr[st];

    return 0;
}