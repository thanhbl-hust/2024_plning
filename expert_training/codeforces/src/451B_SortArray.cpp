/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;

bool check_sort(vector<int> a){
    for(int i = 1; i < a.size(); i++){
        if(a[i] < a[i - 1]) return false;
    }
    return true;
}

bool check(vector<int> a, int left, int right){
    for(int i = 0; i < left - 1; i++){
        if(a[i] > a[i + 1]){
            //cout << '1' << endl;
            return false;
        }
    }
    for(int i = right + 1; i < a.size() - 1; i++){
        if(a[i] > a[i + 1]){
            //cout << '2' << endl;
            return false;
        }
    }

    for(int i = left; i < right; i++){
        if(a[i] < a[i + 1]){
            //cout << '3' << endl;
            return false;
        }
    }

    if(left != 0 and a[right] < a[left - 1]){
        //cout << '4';
        return false;
    }
    if(right != a.size() - 1 and a[left] > a[right + 1]){
        //cout << '5'; 
        return false;
    }


    return true;
}

void solve(){
    
    int n; cin >> n; vector<int> a(n); for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> b = a;


    if(check_sort(a) == true){
        cout << "yes" << endl;
        cout << "1 1" << endl;
    }else{
        sort(b.begin(), b.end());
        int l = 0, r = n - 1;
        while(a[l] == b[l]) l += 1;
        while(a[r] == b[r]) r -= 1;

        if(check(a, l, r) == false){
            cout << "no" << endl;
        }else{
            cout << "yes" << endl;
            cout << l + 1 << " " << r + 1 << endl;
        }
    }
}

 int main(){

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    //run();

    solve();

    return 0;
}