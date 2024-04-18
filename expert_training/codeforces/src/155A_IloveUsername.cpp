#include<bits/stdc++.h>
using namespace std;

void run(){
    
    int t, count = 0; cin >> t;
    int index; cin >> index; int minVal = index, maxVal = index;
    for(int i = 1; i < t; i++){
        cin >> index; 
        if(index < minVal){
            minVal = index; count += 1;
        }
        if(index > maxVal){
            maxVal = index; count += 1;
        }
    }
    cout << count;

}

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    run();

    return 0;
}