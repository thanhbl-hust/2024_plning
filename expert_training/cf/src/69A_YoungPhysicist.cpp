#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int n;
int arr[105][3];

bool check(){

    for(int i = 0; i < 3; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++) cnt += arr[j][i];
        if(cnt != 0) return false;
    }

    return true;
}

int main(){
    
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    cout << (check() ? "YES" : "NO") << endl;

    return 0;
}