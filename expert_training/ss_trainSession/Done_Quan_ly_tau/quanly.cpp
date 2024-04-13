#include<iostream>
using namespace std;

#define maxVal 1e9;

int N;
int ans = 1e9;
int v[3] = {0, 0, 0};
int sit[65];
int coor[3];
int pp[3];

void set_sit(){
    for(int i = 1; i < N + 1; i++) sit[i] = -1;
}

void backtrack(int k, int step){
    if(step > ans) return;

    if(k == 3){
        if(step < ans) ans = step;
        return;
    }

    for(int i = 0; i < 3; i++){
        if(v[i] == 0){
            v[i] = 1;

            int num = pp[i];
            int loc = coor[i];
            int bonus = 0;


            for(int j = 1; j < num; j++){
                int nearL = 0;
                int nearR = 0;
                while(sit[loc - nearL] != -1) nearL += 1;
                while(sit[loc + nearR] != -1) nearR += 1;
                if(loc - nearL < 1) nearL = maxVal;
                if(loc + nearR > N) nearR = maxVal;
                if(nearL < nearR){
                    sit[loc - nearL] = i;
                    bonus += nearL + 1;
                }else{
                    sit[loc + nearR] = i;
                    bonus += nearR + 1;
                }
            }

            
            int nL = 0, nR = 0;
            while(sit[loc - nL] != -1) nL += 1;
            while(sit[loc + nR] != -1) nR += 1;
            if(loc - nL < 1) nL = maxVal;
            if(loc + nR > N) nR = maxVal;

            if(nL < nR){
                sit[loc - nL] = i;
                backtrack(k + 1, step + bonus + nL + 1);
                sit[loc - nL] = -1;
            }else if(nR < nL){
                sit[loc + nR] = i;
                backtrack(k + 1, step + bonus + nR + 1);
                sit[loc + nR] = -1;
            }else{
                sit[loc - nL] = i;
                backtrack(k + 1, step + bonus + nL + 1);
                sit[loc - nL] = -1;

                sit[loc + nR] = i;
                backtrack(k + 1, step + bonus + nR + 1);
                sit[loc + nR] = -1;            
            }
            
            for(int j = 1; j < N + 1; j++){
                if(sit[j] == i) sit[j] = -1;
            }

            v[i] = 0;
        }
    }

}

int main(){
    freopen("inp.txt", "r", stdin);


    int test; cin >> test;

    for(int tc = 0; tc < test; tc++){
        ans = 1e9;

        cin >> N; set_sit();
        for(int i = 0; i < 3; i++) cin >> coor[i] >> pp[i];

        backtrack(0, 0);

        cout << "Case #" << tc + 1 << endl << ans << endl;
    }

    return 0;
}