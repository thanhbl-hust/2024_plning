#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;


int check(int n){
    int a, b, c, d;
    a = b = c = d = 1e9;
    if(n % 3 == 0) a = n / 3;
    if(n % 3 == 2) b = (n - 2) / 3 + 1;
    if(n % 3 == 1) c = (n + 2) / 3 + 1;
    if(n % 2 == 0) d = n / 2;
    return min(a, min(b, min(c, d)));
}

int main(){

    freopen("inp.txt", "r", stdin);

    int test; cin >> test;

    for(int i = 0; i < test; i++){
        int n; cin >> n; cout << check(n) << endl;
    }

    return 0;
}