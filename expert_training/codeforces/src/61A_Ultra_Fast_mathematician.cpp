#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){

    string a, b; cin >> a >> b;

    for(int i = 0; i < a.size(); i++){
        cout << (a[i] == b[i] ? '0' : '1');
    }

    return 0;
}