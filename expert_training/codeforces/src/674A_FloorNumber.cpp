#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;



int main(){
	int test; cin >> test;

	for(int i = 0; i < test; i++){
		int n, m; cin >> n >> m;
		if(n == 1 || n == 2){
			cout << 1 << endl;
		}else{
			n -= 2;
			int ans = n / m + 1;
			if(n % m != 0) ans += 1;
			cout << ans << endl;
		}
	}

	return 0;
}