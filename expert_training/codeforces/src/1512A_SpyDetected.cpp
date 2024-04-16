#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){
    int test; cin >> test;

    for(int tc = 0; tc < test; tc++){
        int leng; cin >> leng;
        int arr[105];
        for(int i = 0; i < leng; i++) cin >> arr[i];

        if(arr[0] == arr[1]){
            int st = 2;
            while(st < leng){
                if(arr[st] != arr[0]){
                    cout << st + 1 << endl;
                    break;
                }
                st += 1;
            }
        }else{
            if(arr[2] == arr[0]){
                cout << 2 << endl;
            }else cout << 1 << endl;
        }

    }

    return 0;
}