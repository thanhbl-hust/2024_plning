#include<iostream>

using namespace std;

int coor[15][2];
int v[15];
int N;
int ans = 1e9;
int x, y, xx, yy;


int abso(int n){
    if(n < 0) n *= -1;
    return n;
}

void backtrack(int k, int dis, int last){
    if(dis > ans) return;

    if(k == N){
        dis += abso(coor[last][0] - xx) + abso(coor[last][1] - yy);
        if(dis < ans) ans = dis;
        return;
    }

    for(int i = 0; i < N; i++){
        if(v[i] == 0){
            v[i] = 1;
            if(last == -1){
                backtrack(k + 1, dis + abso(x - coor[i][0]) + abso(y - coor[i][1]), i);
            }else{
                backtrack(k + 1, dis + abso(coor[last][0] - coor[i][0]) + abso(coor[last][1] - coor[i][1]), i);
            }
            v[i] = 0;
        }
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    int test; cin >> test;

    for(int tc = 0; tc < test; tc++){
        ans = 1e9;

        cin >> x >> y >> xx >> yy >> N;
        for(int i = 0; i < N; i++) cin >> coor[i][0] >> coor[i][1];

        backtrack(0, 0, -1);

        cout << "#" << tc + 1 << " " << ans << endl;
    }

    return 0;
}