#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int find(vector<int> ans, int n){
    for(int i = 0; i < ans.size(); i++){
        if(ans[i] == n) return true;
    }
    return false;
}

bool check(int num){
    vector<int> ans;
    int leng = 0;
    while(num != 0){
        if(!find(ans, num % 10)) ans.push_back(num % 10);
        num /= 10;
        leng += 1;
    }
    return leng == ans.size();
}


int main(){
    
    int a, b; cin >> a >> b;

    int st = a;

    while(!check(st) && st <= b) st += 1;

    cout << (st > b ? -1 : st) << endl;


    return 0;
}