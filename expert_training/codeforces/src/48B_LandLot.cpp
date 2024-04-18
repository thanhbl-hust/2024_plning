/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> garden(50, vector<int> (50));

void solve(){

    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> garden[i][j];
        }
    }

    int minv = INT_MAX;

    int x, y; cin >> x >> y;

    for(int i = 0; i < n - x + 1; i++){
        for(int j = 0; j < m - y + 1; j++){
            int ss = 0;
            for(int stx = i; stx < i + x; stx++){
                for(int sty = j; sty < j + y; sty++){
                    ss += garden[stx][sty];
                }
            }
            minv = min(minv, ss);
        }
    }
    for(int i = 0; i < n - y + 1; i++){
        for(int j = 0; j < m - x + 1; j++){
            int ss = 0;
            for(int stx = i; stx < i + y; stx++){
                for(int sty = j; sty < j + x; sty++){
                    ss += garden[stx][sty];
                }
            }
            minv = min(minv, ss);
        }
    }
    cout << minv;
}

 int main(){

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    //run();

    solve();

    return 0;
}