#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;



int main(){
	string ss = "abc";

	int test; cin >> test;

	for(int i = 0; i < test; i++){
		string s; cin >> s;
		int cnt = 0;
		for(int i = 0; i < 3; i++){
			if(s[i] == ss[i]) cnt += 1;
		}
		cout << (cnt == 3 || cnt == 1 ? "YES" : "NO") << endl;
	}

	return 0;
}