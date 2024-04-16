#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;



int main(){
	int arr[1005];
	int test; cin >> test;
	for(int tc = 0; tc < test; tc++){
		int w[2] = {0, 0};
		int leng; cin >> leng;
		for(int i = 0; i < leng; i++){
			cin >> arr[i];
			if(arr[i] % 2 != i % 2) w[arr[i] % 2] += 1;
		}
		cout << (w[0] == w[1] ? w[0] : -1) << endl;
	}

	return 0;
}