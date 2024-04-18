#include<bits/stdc++.h>
using namespace std;
void run(){

    int a, b; cin >> a >> b;

    cout << min(a, b) << " " << (max(a, b) - min(a, b)) / 2 << endl;
}

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    run();

    return 0;
}