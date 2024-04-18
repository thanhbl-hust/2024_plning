#include<bits/stdc++.h>
using namespace std;

void run(){

    int n; cin >> n; vector<vector<int>> a(n, vector<int> (n));
    for(int i = 0; i < n; i++){
        a[i][0] = 1;
        a[0][i] = 1;
    }
    if(n > 1){
        for(int i = 1; i < n; i++){
            for(int j = 1; j < n; j++){
                a[i][j] = a[i - 1][j] + a[i][j - 1];
            }
        }
    }
    cout << a[n - 1][n - 1] << endl;

}

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    run();

    return 0;
}