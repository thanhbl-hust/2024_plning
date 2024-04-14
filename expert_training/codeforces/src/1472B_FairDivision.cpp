#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int num;

int main(){

    int test; cin >> test;
    for(int tc = 0; tc < test; tc++){
        int n; cin >> n;
        int c1 = 0, c2 = 0;
        for(int i = 0; i < n; i++){
            cin >> num;
            if(num == 1){
                c1 += 1;
            }else c2 += 1;
        }

        int sum = c1 + 2 * c2;
        if(sum % 2 == 1){
            cout << "NO" << endl;
        }else{
            if(c1 == 0){
                if(c2 % 2 == 0){
                    cout << "YES" << endl;
                }else cout << "NO" << endl;
            }else if(c2 == 0){
                cout << "YES" << endl;
            }else{
                if(c1 >= sum / 2 || c2 >= sum / 4){
                    cout << "YES" << endl;
                }else cout << "NO" << endl;
            }
        }

    }

    return 0;
}