#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){
    int arr[4];
    int test; cin >> test;
    for(int i = 0; i < test; i++){
        int ans = 0;
        for(int j = 0; j < 4; j++){
            cin >> arr[j];
            if(arr[j] > arr[0]) ans += 1;
        }
        cout << ans << endl;
    }

    return 0;
}