#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int arr[4];

int main(){
	
	for(int i = 0; i < 4; i++) cin >> arr[i];

	sort(arr, arr + 4);

	for(int i = 0; i < 3; i++) cout << arr[3] - arr[i] << " ";

	return 0;
}