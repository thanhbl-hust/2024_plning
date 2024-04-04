#include<iostream>

using namespace std;

int N = 5;
int stt[10];
int v[10];

void set_v(){
    for(int i = 1; i < N + 1; i++) v[i] = 0;
}

void backtrack(int k){
    if(k == N){
        for(int i = 0; i < N; i++) cout << stt[i];
        cout << endl;
        return;
    }
    for(int i = 1; i < N + 1; i++){
        if(v[i] == 0){
            v[i] = 1;
            stt[k] = i;
            backtrack(k + 1);
            v[i] = 0;
        }
    }
}

int main(){


    backtrack(0);

    return 0;
}