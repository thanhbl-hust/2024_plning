/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){

    map<char, int> cnt;
    cnt['A'] = 0;
    cnt['B'] = 0;
    cnt['C'] = 0;

    vector<string> src(3); for(int i = 0; i < 3; i++) cin >> src[i];

    for(int i = 0; i < 3; i++){
        if(src[i][1] == '>'){
            cnt[src[i][0]] += 1;
        }else cnt[src[i][2]] += 1;
    }

    int c0 = 0, c1 = 0, c2 = 0;

    if(cnt['A'] == 0) c0 += 1;
    if(cnt['B'] == 0) c0 += 1;
    if(cnt['C'] == 0) c0 += 1;
    
    if(cnt['A'] == 1) c1 += 1;
    if(cnt['B'] == 1) c1 += 1;
    if(cnt['C'] == 1) c1 += 1;

    if(cnt['A'] == 2) c2 += 1;
    if(cnt['B'] == 2) c2 += 1;
    if(cnt['C'] == 2) c2 += 1;

    if(c0 != 1 || c1 != 1 || c2 != 1){
        cout << "Impossible";
    }else{
        if(cnt['A'] == 0)  cout << 'A';
        if(cnt['B'] == 0)  cout << 'B';
        if(cnt['C'] == 0)  cout << 'C';
        if(cnt['A'] == 1)  cout << 'A';
        if(cnt['B'] == 1)  cout << 'B';
        if(cnt['C'] == 1)  cout << 'C';
        if(cnt['A'] == 2)  cout << 'A';
        if(cnt['B'] == 2)  cout << 'B';
        if(cnt['C'] == 2)  cout << 'C';
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}