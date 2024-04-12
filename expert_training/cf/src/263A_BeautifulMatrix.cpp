#include<iostream>

using namespace std;

int abso(int n){
    if(n < 0) return -1 * n;
    return n;
}

int main(){

    int n;

    bool done = false;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> n;
            if(n == 1){
                cout << abso(2 - i) + abso(2 - j) << endl;
                done = true;
            }
        }
    }

    return 0;
}