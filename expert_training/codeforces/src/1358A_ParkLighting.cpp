#include<bits/stdc++.h>
using namespace std;

void run(){

    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        int cc = (a * b) % 2;
        if(cc == 0){
            cout << (a * b) / 2 << endl;
        }else cout << (a * b) / 2 + 1 << endl;
    }

}

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    run();

    return 0;
}