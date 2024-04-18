#include<bits/stdc++.h>
using namespace std;
void run(){

    int s, v1, v2, t1, t2; cin >> s >> v1 >> v2 >> t1 >> t2;

    int s1 = s * v1 + 2 * t1, s2 = s * v2 + 2 * t2;

    if(s1 < s2){
        cout << "First";
    }else if(s1 == s2){
        cout << "Friendship";
    }else cout << "Second";
}

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    run();

    return 0;
}