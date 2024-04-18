#include<bits/stdc++.h>
using namespace std;

void run(){

    int t; cin >> t;
    while(t--){
        bool found = false;
        int length; cin >> length;
        int a[length];
        for(int i = 0; i < length; i++) cin >> a[i];

        sort(a, a + length);

        for(int i = 1; i < length; i++){
            if(a[i] - a[i - 1] > 1){
                cout << "NO" << endl;
                found = true;
                break;
            }
        }
        if(found == false) cout << "YES" << endl;
    }

}

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    run();

    return 0;
}