#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

vector<string> month = {
    "January", "February", "March", "April", 
    "May", "June", "July", "August", "September", 
    "October", "November", "December"
};

int next(int n){
    if(n == 11) return 0;
    return n + 1;
}

int find(string s){
    for(int i = 0; i < month.size(); i++){
        if(month[i] == s) return i;
    }
    return -1;
}

int main(){
    
    string s; int n; cin >> s >> n;
    int index = find(s);
    while(n--) index = next(index);
    cout << month[index];

    return 0;
}