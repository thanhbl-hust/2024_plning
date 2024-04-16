#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main(){
    int test; cin >> test;

    for(int tc = 0; tc < test; tc++){
        int leng; cin >> leng;
        int minIndex = 0;
        int arr[10]; 
        for(int i = 0; i < leng; i++){
            cin >> arr[i];
            if(arr[i] < arr[minIndex]) minIndex = i;
        }
        arr[minIndex] += 1;
        int prod = 1;
        for(int i = 0; i < leng; i++) prod *= arr[i];
        cout << prod << endl;
    }

    return 0;
}