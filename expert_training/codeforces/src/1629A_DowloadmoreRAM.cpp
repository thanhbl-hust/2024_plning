#include<bits/stdc++.h>
using namespace std;

void run(){

    int t; cin >> t;

    while(t--){
        int n, k; cin >> n >> k; int a[2][n];

        for(int i = 0; i < 2; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        //sorting;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n - i - 1; j++){
                if(a[0][j] > a[0][j + 1]){
                    int tmp = a[0][j];
                    a[0][j] = a[0][j + 1];
                    a[0][j + 1] = tmp;
                    tmp = a[1][j];
                    a[1][j] = a[1][j + 1];
                    a[1][j + 1] = tmp;
                }
            }
        }

        int start = 0;

        while(start < n){
            if(k < a[0][start]) break;
            k += a[1][start];
            start += 1;
        }

        cout << k << endl;

    }



}

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    run();

    return 0;
}