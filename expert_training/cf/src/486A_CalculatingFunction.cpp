#include<bits/stdc++.h>
#include<stdio.h>


using namespace std;

int main(){

    
    long long n; cin >> n;
    cout << (n % 2 == 0 ? n / 2 : -1 * (n / 2 + 1));

    return 0;
}