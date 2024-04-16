#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;


int main(){
    int k, n, w; cin >> k >> n >> w;

    int need = 0;
    for(int i = 1; i < w + 1; i++) need += i * k;

    n -= need;

    if(n >= 0){
        cout << 0 << endl;
    }else cout << -1 * n << endl;

    return 0;
}