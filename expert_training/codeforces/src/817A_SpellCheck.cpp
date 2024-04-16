#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

string r = "Timur";

bool check(char c, string s){
	for(int i = 0; i < 5; i++){
		if(s[i] == c) return true;
	}
	return false;
}

int main(){
	int test; cin >> test;

	for(int tc = 0; tc < test; tc++){
		int leng; string s; cin >> leng >> s;
		if(leng != 5){
			cout << "NO" << endl;
		}else{
			int satisfi = 0;
			for(int i = 0; i < r.size(); i++){
				if(check(r[i], s)) satisfi += 1;
			}

			cout << (satisfi == 5 ? "YES" : "NO") << endl;
		}
	}

	return 0;
}