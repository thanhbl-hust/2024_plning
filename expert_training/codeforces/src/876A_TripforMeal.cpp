#include<bits/stdc++.h>
using namespace std;
void solve(){

    int n, a, b, c; cin >> n >> a >> b >> c;

	int distance = 0;

	if(n == 1) cout << 0 << endl;
	else{
        int start = 1, location = 1;
	    while(start < n){
		    if(location == 1){
			    distance += min(a, b);
			    if(a <= b){
				    location = 2;
			    }else{
				    location = 3;
			    }
		    }else if(location == 2){
			    distance += min(a, c);
			    if(a <= c){
				    location = 1;
			    }else{
				    location = 3;
			    }
		    }else{
			    distance += min(b, c);
			    if(b <= c){
				    location = 1;
			    }else{
				    location = 2;
		 	    } 
		    } 
		    start += 1;
	    }
	    cout << distance;
    }
}

void run(){

    solve();

}

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    run();

    return 0;
}