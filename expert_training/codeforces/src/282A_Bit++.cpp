#include<iostream>

using namespace std;

int main(){

    int ans = 0;

    int n; cin >> n;

    for(int i = 0; i < n; i++){
        string s; cin >> s;
        if(s[1] == '+'){
            ans += 1;
        }else ans -= 1;
    }

    cout << ans;

    return 0;
}