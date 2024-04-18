#include<bits/stdc++.h>

using namespace std;

int index;

int find(string s, int st, int en, char c){
    for(int i = st; i < en; i++){
        if(s[i] == c) return i;
    }
    return -1;
}

void run(){
    string s; cin >> s;
    string a = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'h' || s[i] == 'e' || s[i] == 'l' || s[i] == 'o'){
            a += s[i];
        }
    }
    bool found = false;

    for(int i = 0; i < a.size(); i++){
        if(a[i] == 'h'){
            for(int j = i + 1; j < a.size(); j++){
                if(a[j] == 'e'){
                    for(int k = j + 1; k < a.size(); k++){
                        if(a[k] == 'l'){
                            for(int l = k + 1; l < a.size(); l++){
                                if(a[l] == 'l'){
                                    for(int m = l + 1; m < a.size(); m++){
                                        if(a[m] == 'o'){
                                            cout << "YES" << endl;
                                            found = true;
                                            break;
                                        }
                                    }
                                }
                                if(found == true) break;
                            }
                        }
                        if(found == true) break;
                    }
                }
                if(found == true) break;
            }
        }
        if(found == true) break;
    }
    if(found == false) cout << "NO" << endl;
}

int main(){
    run();

    return 0;
}