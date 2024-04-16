#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	int test; cin >> test;

	for(int i = 0; i < test; i++){
		string s; cin >> s;
		for(int i = 0; i < s.size(); i++) s[i] = tolower(s[i]);
		cout << (s == "yes" ? "YES" : "NO") << endl;
	}

	return 0;
}