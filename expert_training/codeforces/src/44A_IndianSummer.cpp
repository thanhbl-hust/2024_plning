#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

string a, b;
vector<string> ls;

bool find(){
    if(ls.size() == 0) return false;
    int st = 0;
    while(st < ls.size() - 1){
        if(ls[st] == a && ls[st + 1] == b) return true;
        st += 1;
    }
    return false;
}

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if(!find()){
            ls.push_back(a);
            ls.push_back(b);
        }
    }

    cout << ls.size() / 2 << endl;

    return 0;
}