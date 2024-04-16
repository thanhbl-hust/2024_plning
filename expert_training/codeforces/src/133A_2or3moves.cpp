#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int check(int n){
	int a = 1e9;
	int b = a, c = a, d = a, e = a;
	if(n % 3 == 0) a = n / 3;
	if(n % 2 == 0) b = n / 2;
	if(n % 3 == 1){
		c = (n + 2) / 3 + 1;
		if(n >= 4) e = (n - 4) / 3 + 2;
	}
	if(n % 3 == 2) d = (n - 2) / 3 + 1;
	int arr[5] = {a, b, c, d, e};
	sort(arr, arr + 5);
	return arr[0];
}

int main(){
	int test; cin >> test;

	for(int tc = 0; tc < test; tc++){
		int n; cin >> n; cout << check(n) << endl;
	}

	return 0;
}