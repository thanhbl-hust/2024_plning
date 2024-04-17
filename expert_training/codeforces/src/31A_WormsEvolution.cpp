#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int n, arr[105];

int find(int N){
    for(int i = 0; i < n; i++){
        if(arr[i] == N) return i;
    }
    return -1;
}

int main(){
    cin >> n; 
    int cnt[2005];
    for(int i = 0; i < 2005; i++) cnt[i] = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        cnt[arr[i]] += 1;
    }

    bool found = false;

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(cnt[arr[i] + arr[j]] != 0){
                found = true;
                cout << find(arr[i] + arr[j]) + 1 << " " << i + 1 << " " << j + 1 << endl;
                break;
            }
        }
        if(found) break;
    }

    if(!found) cout << -1;

    return 0;
}