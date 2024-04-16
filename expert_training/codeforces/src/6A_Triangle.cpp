#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int arr[4];

void solve(){
	bool pos = false, line = false;

	for(int i = 0; i < 2; i++){
		if(arr[i] + arr[i + 1] > arr[i + 2]) pos = true;
		if(arr[i] + arr[i + 1] == arr[i + 2]) line = true;
	}

	if(pos){
		cout << "TRIANGLE" << endl;
	}else if(line){
		cout << "SEGMENT" << endl;
	}else cout << "IMPOSSIBLE" << endl;
}

int main(){
	
	for(int i = 0; i < 4; i++) cin >> arr[i];
	sort(arr, arr + 4);

	solve();

	return 0;
}