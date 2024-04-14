#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;


int main(){

    int n, S; cin >> n >> S;

    cout << (S % n == 0 ? S / n : S / n + 1) << endl;

    return 0;
}