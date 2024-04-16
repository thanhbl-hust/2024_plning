#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;



int main(){
	int M, N; cin >> M >> N;
	bool color = false;

	char c;
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			cin >> c;
			if(c != 'B' && c != 'W' && c != 'G') color = true;
		}
	}

	cout << (color == false ? "#Black&White" : "#Color") << endl;


	return 0;
}