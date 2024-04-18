#include<bits/stdc++.h>
using namespace std;


string madeString(string s, int st, int en){
    string a = "";
    for(int i = st; i < en; i++) a += s[i];
    return a;
}

bool palind(string s){
    int l = 0;
    int r = s.size() - 1;
    while(l < r){
        if(s[l] != s[r]) return false;
        l += 1;
        r -= 1;
    }
    return true;
}

bool check(string s){

    for(int i = 2; i < s.size() + 1; i++){
        for(int j = 0; j < s.size() - i + 1; j++){
            string a = madeString(s, j, j + i);
            if(palind(a)){
                return true;
            }
        }
    }
    return false;
}
void run(){


    int t; cin >> t;
    while(t--){
        int length; string s; cin >> length >> s;

        if(check(s)){
            cout << "NO" << endl;
        }else cout << "YES" << endl;
    }



}

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    run();

    return 0;
}