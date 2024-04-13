#include<bits/stdc++.h>

using namespace std;

int n, arr[105];

int main(){
    cin >> n; for(int i = 0; i < n; i++) cin >> arr[i]; sort(arr, arr + n);

    int st = 0;
    int en = n - 1;
    while(st < en){
        swap(arr[st], arr[en]);
        st += 1;
        en -= 1;
    }
    for(int i = 1; i < n; i++) arr[i] += arr[i - 1];
    int cnt = 0;
    while(arr[cnt] <= arr[n - 1] - arr[cnt]) cnt += 1;
    cout << cnt + 1 << endl;

    return 0;
}