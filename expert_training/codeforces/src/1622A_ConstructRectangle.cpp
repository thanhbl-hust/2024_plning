#include<bits/stdc++.h>
using namespace std;

void run(){

    int t, a[3]; cin >> t;
    while(t--){
        for(int i = 0; i < 3; i++) cin >> a[i];
        sort(a, a + 3);
        if(a[0] < a[1] && a[1] < a[2]){
            if(a[2] == a[0] + a[1]){
                cout << "YES" << endl;
            }else cout << "NO" << endl;
        }else{
            if(a[0] == a[1] and a[1] < a[2]){
                if(a[2] % 2 == 0){
                    cout << "YES" << endl;
                }else cout << "NO" << endl;
            }else if(a[0] < a[1] and a[1] == a[2]){
                if(a[0] % 2 == 0){
                    cout << "YES" << endl;
                }else cout << "NO" << endl;
            }else if(a[0] == a[1] and a[1] == a[2]){
                if(a[1] % 2 == 0){
                    cout << "YES" << endl;
                }else cout << "NO" << endl;
            }
        }
    }
}

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    run();

    return 0;
}