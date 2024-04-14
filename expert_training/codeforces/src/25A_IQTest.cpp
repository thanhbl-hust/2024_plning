#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int arr[105];

int main(){

    int n; cin >> n; for(int i = 0; i < n; i++) cin >> arr[i];

    int c0 = arr[0] % 2, c1 = arr[1] % 2;

    if(c0 == c1){
        for(int i = 2; i < n; i++){
            if(arr[i] % 2 != c0){
                cout << i + 1 << endl;
                break;
            }
        }
    }else{
        if(arr[2] % 2 == c0){
            cout << 2 << endl;
        }else cout << 1 << endl;
    }

    return 0;
}