#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;


int main(){
    int n, s = 0; cin >> n; int arr[101], v[101];
    for(int i = 0; i < n; i++){
        v[i] = 0;
        cin >> arr[i];
        s += arr[i];
    }

    int target = s / (n / 2);

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(v[i] == 0 && v[j] == 0 && arr[i] + arr[j] == target){
                v[i] = 1;
                v[j] = 1;
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }

    return 0;
}