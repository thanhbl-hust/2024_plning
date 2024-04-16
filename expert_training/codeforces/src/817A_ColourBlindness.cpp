#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;



int main(){
	int test; cin >> test;

	for(int i = 0; i < test; i++){
		int l; cin >> l; string a, b; cin >> a >> b;
		for(int j = 0; j < l; j++){
			if(a[j] == 'G') a[j] = 'B';
			if(b[j] == 'G') b[j] = 'B';
		}
		cout << (a == b ? "YES" : "NO") << endl;
	}

	return 0;
}