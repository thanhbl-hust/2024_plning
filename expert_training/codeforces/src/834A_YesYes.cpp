#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool check(string s){
	int leng = s.size();
	for(int i = 0; i < leng; i++){
		if(s[i] != 'Y' && s[i] != 'e' && s[i] != 's') return false;
	}
	for(int i = 0; i < leng - 1; i++){
		if(s[i] == 'Y' && s[i + 1] != 'e') return false;
		if(s[i] == 'e' && s[i + 1] != 's') return false;
		if(s[i] == 's' && s[i + 1] != 'Y') return false;
	}
	return true;
}

int main(){
	int test; cin >> test;

	for(int tc = 0; tc < test; tc++){
		string s; cin >> s;
		cout << (check(s) ? "YES" : "NO") << endl;
	}

	return 0;
}