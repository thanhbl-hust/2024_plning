#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){
    int test; cin >> test;

    for(int tc = 0; tc < test; tc++){
        int a = 0, b = 0;
        int leng; cin >> leng;
        int arr[205];
        for(int i = 0; i < 2 * leng; i++){
            cin >> arr[i];
            if(arr[i] % 2 == 0){
                a += 1;
            }else b += 1;
        }
        cout << (a == b ? "Yes" : "No") << endl;
    }

    return 0;
}