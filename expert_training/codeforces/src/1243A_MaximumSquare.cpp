#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int N;
int arr[1005];

bool check(int n){
    int cnt = 0;
    for(int i = 0; i < N; i++){
        if(arr[i] >= n) cnt += 1;
    }
    if(cnt >= n) return true;
    return false;
}

int main(){
    int test; cin >> test;

    for(int tc = 0; tc < test; tc++){
        cin >> N; 
        for(int i = 0; i < N; i++) cin >> arr[i];
        int st = 1;
        while(check(st) == true) st += 1;
        cout << st - 1 << endl;
    }

    return 0;
}