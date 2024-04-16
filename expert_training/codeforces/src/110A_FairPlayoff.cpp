#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;



int main(){
	int test; cin >> test;

	for(int tc = 0; tc < test; tc++){
		int a, b, c, d; cin >> a >> b >> c >> d;
		int arr[4] = {a, b, c, d};
		sort(arr, arr + 4);
		cout << (max(a, b) + max(c, d) == arr[2] + arr[3] ? "YES" : "NO") << endl;
	}


	return 0;
}