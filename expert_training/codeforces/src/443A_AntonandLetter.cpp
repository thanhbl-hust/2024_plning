#include<bits/stdc++.h>
using namespace std;

void run(){

    string s;
    getline(cin, s);
    set<char> c;

    for(int i = 0; i < s.size(); i++){
        if(s[i] != '{' && s[i] != ' ' && s[i] != '}' && s[i] != ','){
            //cout << s[i] << " ";
            c.insert(s[i]);
        }
    }

    cout << c.size() << endl;

}

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    run();

    return 0;
}