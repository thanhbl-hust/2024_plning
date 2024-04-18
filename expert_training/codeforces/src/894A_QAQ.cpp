#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){
    int ans = 0;
    string s; cin >> s;

    if(s.size() >= 3){
        for(int i = 0; i < s.size() - 2; i++){
            if(s[i] == 'Q'){
                for(int j = i + 1; j < s.size() - 1; j++){
                    if(s[j] == 'A'){
                        for(int k = j + 1; k < s.size(); k++){
                            if(s[k] == 'Q') ans += 1;
                        }
                    }
                }
            }
        }
    }else ans = 0;
    cout << ans;

    return 0;
}