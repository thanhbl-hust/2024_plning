#include<iostream>

using namespace std;

bool check(string a, string b){
    int st = 0;
    int en = a.size() - 1;
    while(st < a.size()){
        if(a[st] != b[en]) return false;
        st += 1;
        en -= 1;
    }
    return true;
}

int main(){

    string a, b; cin >> a >> b; cout << (check(a, b) == true ? "YES" : "NO");

    return 0;
}