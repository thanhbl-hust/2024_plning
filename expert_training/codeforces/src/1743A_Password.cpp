#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;


int main(){
    int test; cin >> test;

    for(int i = 0; i < test; i++){
        int num; cin >> num;
        int arr[10]; for(int j = 0; j < num; j++) cin >> arr[j];

        int left = 10 - num;

        cout << 3 * left * (left - 1)  << endl;

    }

    return 0;
}