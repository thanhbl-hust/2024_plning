#include<iostream>

using namespace std;

int main(){

    int cnt = 0;
    string s; cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(cnt > 7) break;
        if(s[i] == '4' || s[i] == '7') cnt += 1;
    }

    cout << (cnt == 4 || cnt == 7 ? "YES" : "NO");
    return 0;
}