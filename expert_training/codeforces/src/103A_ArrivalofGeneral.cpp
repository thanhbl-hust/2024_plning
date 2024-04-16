#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;



int main(){
	int n; cin >> n; int arr[105]; for(int i = 0; i < n; i++) cin >> arr[i];

	int mn = 0, mx = 0;

	for(int i = 0; i < n; i++){
		if(arr[i] <= arr[mn]) mn = i;
	}
	for(int i = n - 1; i >= 0; i--){
		if(arr[i] >= arr[mx]) mx = i;
	}

	int ans = (n - 1 - mn) + mx;

	if(mx > mn) ans -= 1;

	cout << ans;

	return 0;
}