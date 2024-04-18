/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;
void solve(){

    int x, y; cin >> x >> y;
    string turn = "Ciel";
    while((x >= 2 and y >= 2) || (x >= 1 and y >= 12) || (y >= 22)){
        if(turn == "Ciel"){
            if(x >= 2 and y >= 2){
                x -= 2;
                y -= 2;
            }else if(x >= 1 and y >= 12){
                x -= 1;
                y -= 12;
            }else{
                y -= 22;
            }
            turn = "Hanako";
        }else{
            if(y >= 22){
                y -= 22;
            }else if(x >= 1 and y >= 12){
                x -= 1;
                y -= 12;
            }else{
                x -= 2;
                y -= 2;
            }
            turn = "Ciel";
        }
    }
    cout << (turn == "Ciel" ? "Hanako" : "Ciel") << endl;
}

 int main(){

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    //run();

    solve();

    return 0;
}