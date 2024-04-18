#include<iostream>

using namespace std;

int ans = 0;
int N, M;
int v[25][25];
int adj[25][25];

void set_v(){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            v[i][j] = 0;
        }
    }
}

void set_adj(){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            adj[i][j] = 0;
        }
    }
}

void dfs(int vertex, int leng){
    if(leng > ans) ans = leng;
    for(int i = 0; i < N; i++){
        if(adj[i][vertex] == 1){
            if(!v[i][vertex]){
                v[i][vertex] = v[vertex][i] = 1;
                dfs(i, leng + 1);
                v[i][vertex] = v[vertex][i] = 0;
            }
        }
    }
}

int main(){

    freopen("inp.txt", "r", stdin);

    int test; cin >> test;
    for(int tc = 0; tc < test; tc++){
        ans = 0;
        cin >> N >> M;
        set_adj();
        for(int i = 0; i < M; i++){
            int a, b; cin >> a >> b;
            adj[a][b] = adj[b][a] = 1;
        }

        for(int i = 0; i < N; i++){
            set_v();
            dfs(i, 0);
        }

        cout << "#" << tc + 1 << " " << ans << endl;
    }

    return 0;
}