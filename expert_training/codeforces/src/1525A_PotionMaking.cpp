#include<bits/stdc++.h>
using namespace std;

int sml(int n){
    for(int i = n; i > 0; i--){
        if(n % i == 0 and 100 % i == 0) return i;
    }
    return -1;
}

void run(){
    int t; cin >> t;
    while(t--){
        int index; cin >> index; 
        int c = sml(index);
        cout << 100 / c << endl;
    }

}

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    run();

    return 0;
}