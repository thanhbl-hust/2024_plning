/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n; cin >> n; vector<int> a(n); for(int i = 0; i < n; i++) cin >> a[i];

    if(n == 1){
        cout << "1 0" << endl;
    }else{
        int l = 0, r = n - 1;
        int left = 0, right = 0;
        while(l <= r){
            while(left <= right and l <= r){
                left += a[l];
                //cout << "left " << left << endl;
                l += 1;
            }
            while(right < left and l <= r){
                right += a[r];
                //cout << "right " << right << endl;
                r -= 1;
            }
            if(l == r){
                if(left <= right){
                    left += a[l];
                    l += 1;
                }else{
                    right += a[r];
                    r -= 1;
                }
            }
        }
        cout << l << " " << n - l << endl;
    }
}

 int main(){

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    //run();

    solve();

    return 0;
}