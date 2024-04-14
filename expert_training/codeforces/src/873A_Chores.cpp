#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int n, k, x;
int arr[105];

int main(){
    cin >> n >> k >> x; for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    int st = n - 1;
    while(arr[st] > x && k > 0){
        arr[st] = x;
        st -= 1;
        k -= 1;
    }

    int s = 0; for(int i = 0; i < n; i++) s += arr[i]; cout << s;

    return 0;
}