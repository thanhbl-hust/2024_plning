#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int arr[3];

int main(){
	
	int test; cin >> test;

	for(int tc = 0; tc < test; tc++){
		for(int i = 0; i < 3; i++) cin >> arr[i];
		sort(arr, arr + 3);
		cout << (arr[0] + arr[1] == arr[2] ? "YES" : "NO") << endl;
	}

	return 0;
}