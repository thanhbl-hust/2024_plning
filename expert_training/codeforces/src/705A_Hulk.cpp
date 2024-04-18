#include<bits/stdc++.h>
using namespace std;

void run(){


    string l = "I hate ";
    string r = "I love ";

    int t; cin >> t;

    for(int i = 0; i < t; i++){
        if(i % 2 == 0){
            cout << l;
        }else cout << r;

        if(i != t - 1){
            cout << "that ";
        }else cout << "it";
    }
}

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    run();

    return 0;
}