#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){
    long long a, b; cin >> a >> b;
    int step = max(a, b) / min(a, b);
    if(a == b){
        cout << 0 << endl;
    }else if(max(a, b) % min(a, b) != 0){
        cout << -1 << endl;
    }else{
        int step = max(a, b) / min(a, b);
        int count = 0;

        while(step % 2 == 0){
            step /= 2;
            count += 1;
        }
        while(step % 3 == 0){
            step /= 3;
            count += 1;
        }
        cout << (step != 1 ? -1 : count) << endl;
    }

    return 0;
}