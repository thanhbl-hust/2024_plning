#include<bits/stdc++.h>
using namespace std;

int sml(int n){
    for(int i = n; i > 0; i--){
        if(n % i == 0 and 100 % i == 0) return i;
    }
    return -1;
}

void run(){
    float a, b, c, d; cin >> a >> b >> c >> d;

    float res = (b - a) / (c + d);

    cout << fixed << setprecision(10) << res << endl;

}

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    run();

    return 0;
}