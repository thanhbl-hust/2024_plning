#include<iostream>

using namespace std;

int arr[51];

int main(){

    int n, k; cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> arr[i];
    int r = arr[k - 1];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] >= r && arr[i] != 0) cnt += 1;
    }
    cout << cnt;

    return 0;
}