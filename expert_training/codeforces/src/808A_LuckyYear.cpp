#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int getl(int y){
    int leng = 0;
    while(y != 0){
        y /= 10;
        leng += 1;
    }
    return leng;
}

int main(){
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    
    int y; cin >> y;

    int leng = getl(y);

    int st_num = y / pow(10, leng - 1);

    cout << fixed << setprecision(0) << (st_num + 1) * pow(10, leng - 1) - y << endl;

    return 0;
}