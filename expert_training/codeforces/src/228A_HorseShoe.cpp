#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

vector<int> a;

bool check(int n){
    for(int i = 0; i < a.size(); i++){
        if(a[i] == n) return false;
    }
    return true;
}

int main(){

    for(int i = 0; i < 4; i++){
        int n; cin >> n;
        if(check(n)) a.push_back(n);
    }

    cout << 4 - a.size() << endl;

    return 0;
}