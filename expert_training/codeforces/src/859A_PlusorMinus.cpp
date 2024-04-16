#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


int main(){
	int n; cin >> n;

	for(int i = 0; i < n; i++){
		int a, b, c; cin >> a >> b >> c;
		cout << (a + b == c ? '+' : '-') << endl;
	}

	return 0;
}