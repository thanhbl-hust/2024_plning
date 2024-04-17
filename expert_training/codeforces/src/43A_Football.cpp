#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){

    int a[2] = {0, 0};
    int n; cin >> n;
    string r = "", r1 = "";
    for(int i = 0; i < n; i++){
        string aa; cin >> aa;
        if(r == ""){
            r = aa;
            a[0] += 1;
        }else if(aa == r){
            a[0] += 1;
        }else if(r != ""){
            r1 = aa;
            a[1] += 1;
        }
    }
    if(a[0] > a[1]){
        cout << r;
    }else cout << r1;

    return 0;
}