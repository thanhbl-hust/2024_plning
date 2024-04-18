#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;


int main(){
    
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        vector<int> ans;
        string s; cin >> s;
        for(int j = 0; j < s.size(); j++){
            if(s[j] == '1') ans.push_back(j);
        }

        int cnt = 0;
        for(int i = 1; i < ans.size(); i++){
            if(ans[i] - ans[i - 1] != 1){
                cnt += ans[i] - ans[i - 1] - 1;
            }
        }
        cout << cnt << endl;
    }


    return 0;
}