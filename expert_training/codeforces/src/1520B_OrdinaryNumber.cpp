#include<bits/stdc++.h>
using namespace std;

void run(){
    vector<long long> or_number;

    for(int i = 1; i < 10; i++){
        for(int j = 1; j < 11; j++){
            
            int length = j;

            long long num = i;

            for(int k = 1; k < length; k++){
                num = num * 10 + i;
            }
            or_number.push_back(num);

        }
    }

    //cout << or_number.size() << endl;
    int t; cin >> t;

    while(t--){
        int index, count = 0; cin >> index;
        for(int i = 0; i < or_number.size(); i++){
            if(or_number[i] <= index){
                count += 1;
            }
        }
        cout << count << endl;
    }


}

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    run();

    return 0;
}