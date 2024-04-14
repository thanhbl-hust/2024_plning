#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

bool arr[105];

bool check(int N){
    for(int i = 1; i < N + 1; i++){
        if(arr[i] == 0) return false;
    }
    return true;
}

int main(){
    int N; cin >> N;
    for(int i = 1; i < N + 1; i++) arr[i] = 0;
    int n1; cin >> n1;
    for(int i = 0; i < n1; i++){
        int s; cin >> s; arr[s] = 1;
    }
    int n2; cin >> n2;
    for(int i = 0; i < n2; i++){
        int s; cin >> s; arr[s] = 1;
    }

    cout << (check(N) ? "I become the guy." : "Oh, my keyboard!") << endl;

    return 0;
}