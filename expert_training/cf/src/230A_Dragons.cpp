#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int dragon[1005][2];

int main(){

    int s, n; cin >> s >> n;
    for(int i = 0; i < n; i++) cin >> dragon[i][0] >> dragon[i][1];

    //sort dragon;

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(dragon[j][0] > dragon[j + 1][0]){
                int tmp = dragon[j][0];
                dragon[j][0] = dragon[j + 1][0];
                dragon[j + 1][0] = tmp;
                tmp = dragon[j + 1][1];
                dragon[j + 1][1] = dragon[j][1];
                dragon[j][1] = tmp;
            }
        }
    }

    bool done = false;

    int st = 0;

    while(st < n){

        if(s <= dragon[st][0]) break;
        s += dragon[st][1];
        st += 1;
    }


    if(st == n) done = true;
    cout << (done == true ? "YES" : "NO") << endl;
    
    return 0;
}