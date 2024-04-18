#include<bits/stdc++.h>
using namespace std;

void run(){

    int t; cin >> t;
    while(t--){
        int length, index, sum = 0; cin >> length; 
        for(int i = 0; i < length; i++){
            cin >> index; sum += index;
        }
        if(sum % length == 0){
            cout << sum / length << endl;
        }else cout << sum / length + 1 << endl;
    }


}

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    run();

    return 0;
}