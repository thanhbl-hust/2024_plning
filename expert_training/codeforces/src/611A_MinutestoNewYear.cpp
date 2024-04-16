#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;



int main(){
	
	int m, s, test; cin >> test;

	for(int i = 0; i < test; i++){
		cin >> m >> s;
		cout << 24 * 60 - 60 * m - s << endl;
	}

	return 0;
}