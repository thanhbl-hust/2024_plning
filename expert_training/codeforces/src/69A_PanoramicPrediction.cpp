#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool isPrime(int n){
	if(n == 1) return false;
	if(n == 2) return true;
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0) return false;
	}
	return true;
}

bool check(int n, int m){
	for(int i = n + 1; i < m; i++){
		if(isPrime(i)) return false;
	}
	return true;
}

int main(){
	
	int n, m; cin >> n >> m;

	cout << (isPrime(n) && isPrime(m) && check(n, m) ? "YES" : "NO") << endl;

	return 0;
}