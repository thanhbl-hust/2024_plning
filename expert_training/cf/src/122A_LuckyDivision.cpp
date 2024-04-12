#include<bits/stdc++.h>

using namespace std;

int lucky[] = {
    4, 7,
    44, 77, 47, 74,
    444, 447, 474, 477,
    744, 747, 774, 777
};

bool check(int n){
    for(int i = 0; i < 14; i++){
        if(n % lucky[i] == 0) return true;
    }
    return false;
}

int main(){
    
    int n; cin >> n;

    cout << (check(n) ? "YES" : "NO");

    return 0;
}