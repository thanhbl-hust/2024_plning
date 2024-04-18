#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){
    
    vector<int> ans = {0};

    int st = 1;

    while(ans.size() <= 1000){
        while(st % 3 == 0 || st % 10 == 3) st += 1;
        ans.push_back(st);
        st += 1;
    }

    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int k; cin >> k; cout << ans[k] << endl;
    }

    return 0;
}