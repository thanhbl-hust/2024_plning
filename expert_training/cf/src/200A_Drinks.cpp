#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;


int main(){
    
    int n; cin >> n;

    float sum = 0;

    for(int i = 0; i < n; i++){
        int a; cin >> a; sum += a;
    }

    printf("%.10f", sum / n);

    return 0;
}