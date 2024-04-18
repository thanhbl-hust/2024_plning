#include<bits/stdc++.h>
using namespace std;

void run(){

    int a, b; cin >> a >> b;

    int count = 1;
    while(1){
        if((a * count) % 10 == b || (a * count) % 10 == 0){
            break;
        }
        count += 1;
    }

    cout << count << endl;

}

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    run();

    return 0;
}