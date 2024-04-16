#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;



int main(){
	int n; cin >> n;

	int arr[100];

	arr[1] = 1;

	for(int i = 2; i < 100; i++){
		arr[i] = arr[i - 1] + i;
	}

	int st = 1;

	while(n >= arr[st]){
		n -= arr[st];
		st += 1;
	}

	cout << st - 1;


	return 0;
}