#include<bits/stdc++.h>
using namespace std;


void run(){


    int n, k; cin >> n >> k; int left = 240 - k;
    int count = 0;
    while(left >= (count + 1) * 5 and count <= n){
        count += 1;
        left -= count * 5;
    }
    if(count > n) count -= 1; cout << count;
    

}

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    run();

    return 0;
}