#include<iostream>
#include<vector>

using namespace std;

bool check(int n){
	vector<int> cnt(10, 0);

	while(n != 0){
		cnt[n % 10] += 1;
		n /= 10;
	}

	for(int i = 0; i < 10; i++){
		if(cnt[i] > 1) return false;
	}
	return true;
}

int main(){
	int n; cin >> n;
	int st = 1;
	while(!check(n + st)) st += 1;
	cout << n + st << endl;

	return 0;
}