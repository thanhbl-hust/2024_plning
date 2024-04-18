#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int n;
vector<string> phone;

bool check(int n){
    for(int i = 1; i < phone.size(); i++){
        if(phone[i][n] != phone[0][n]) return false;
    }
    return true;
}

int main(){

    cin >> n;
    for(int i = 0; i < n; i++){
        string s; cin >> s; phone.push_back(s);
    }
    int maxVal = 0;

    while(check(maxVal)) maxVal += 1;

    cout << maxVal;

    return 0;
}