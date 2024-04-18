#include<bits/stdc++.h>

using namespace std;

void run(){

    int key = 0; string n; cin >> n;
    for(int i = 0; i < n.size(); i++){
        if((n[i] == 'H') or (n[i] == 'Q') or(n[i]== '9')){
            key += 1;
            cout << "YES";
            break;
        }
    }
    if(key == 0){
        cout << "NO";
    }
}

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    run();

    return 0;
}