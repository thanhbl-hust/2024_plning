#include<bits/stdc++.h>

using namespace std;

vector<string> a;

int main(){

    
    int n; cin >> n;

    for(int i = 0; i < n; i++){
        string s; cin >> s; a.push_back(s);
    }

    int cnt = 1;
    for(int i = 1; i < n; i++){
        if(a[i][0] == a[i - 1][1]) cnt += 1;
    }

    cout << cnt;

    return 0;
}