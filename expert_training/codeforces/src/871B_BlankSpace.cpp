#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;



int main(){
	int arr[105];
	int test; cin >> test;

	for(int tc = 0; tc < test; tc++){
		int leng; cin >> leng; for(int i = 0; i < leng; i++) cin >> arr[i];
		vector<int> dp(105, 0);
		for(int i = 0; i < leng; i++){
			if(arr[i] == 0){
				if(arr[i - 1] == 0){
					dp[i] = dp[i - 1] + 1;
				}else dp[i] = 1;
			}
		}

		int maxVal = 0;
		for(int i = 0; i < leng; i++) maxVal = max(maxVal, dp[i]);
		cout << maxVal << endl;
	}

	return 0;
}