/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n; cin >> n; string s; cin >> s;

    if(n == 2 || n == 3){
        cout << s << endl;
    }else{
        if(n % 2 == 0){
            for(int i = 0; i < n; i++){
                if(i % 2 == 0 || i == n - 1){
                    cout << s[i];
                }else cout << s[i] << '-';
            }
        }else if(n % 3 == 0){
            for(int i = 0; i < n; i++){
                if(i % 3 == 0 || i % 3 == 1 || i == n - 1){
                    cout << s[i];
                }else cout << s[i] << '-';
            }
        }else{
            if(n % 3 == 1){
                int c2 = (n - 3) / 2, c3 = 1;
                for(int i = 0; i < n; i++){
                    if(i % 2 == 1 and c2 > 0){
                        cout << s[i] << '-';
                        c2 -= 1;
                    }else cout << s[i];
                }
            }else{
                // n % 3 == 2;
                int c3 = (n - 2) / 3;
                for(int i = 0; i < n; i++){
                    if(i % 3 == 2 and c3 > 0){
                        cout << s[i] << '-';
                        c3 -= 1;
                    }else cout << s[i];
                }
            }
        }
    }
}

 int main(){

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    //run();

    solve();

    return 0;
}