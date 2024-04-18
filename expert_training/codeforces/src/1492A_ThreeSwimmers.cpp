#include<bits/stdc++.h>
using namespace std;

void run(){
    int t; cin >> t;
    while(t--){
        long long a, b, c, d; cin >> a >> b >> c >> d;

        if(a % b == 0 || a % c == 0 || a % d == 0){
            cout << 0 << endl;
        }else{
            if(b < a){
                b = b * ((a / b) + 1);
            }
            if(c < a){
                c = c * ((a / c) + 1);
            }
            if(d < a){
                d = d * ((a / d) + 1);
            }
            cout << min(b - a, min(c - a, d - a)) << endl;
        }
    }
}

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    run();

    return 0;
}