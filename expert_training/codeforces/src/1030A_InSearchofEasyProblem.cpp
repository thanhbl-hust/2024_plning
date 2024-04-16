#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){
    bool easy = true;
    int n; cin >> n; int arr[105];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] == 1) easy = false;
    }

    cout << (easy == true ? "EASY" : "HARD") << endl;

    return 0;
}