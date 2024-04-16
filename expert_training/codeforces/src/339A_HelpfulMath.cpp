#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;


int main(){
    string s; cin >> s;

    int arr[51];

    for(int i = 0; i < s.size(); i += 2) arr[i / 2] = s[i] - '0';
    sort(arr, arr + s.size() / 2 + 1);

    int leng = s.size() / 2 + 1;

    for(int i = 0; i < leng - 1; i++){
        cout << arr[i] << '+';
    }
    cout << arr[s.size() / 2];

    return 0;
}