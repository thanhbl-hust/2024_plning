#include<iostream>
#define maxValue 1000000000;
int result = maxValue;
int tc;
int N;
int coor[4];
int sit[65];
int number[4];
int visited[4] = {-1, -1, -1, -1};
int stt[4] = {-1, -1, -1, -1};
using namespace std;
void resetSitdown(){
    for(int i = 1; i < N + 1; i++) sit[i] = -1;
}
void backtrack(int k, int stepCount){
    if(k == 4){
        if(stepCount < result){
            result = stepCount;
            return;
        }
    }
    for(int i = 1; i < 4; i++){
        if(visited[i] == -1){
            visited[i] = 1;
            stt[k] = i;
            int bonusStep = 0;
            int toado = coor[i]; // toa do cua cong;
            int num = number[i]; // so nguoi o cong do;
            //add num - 1 thang vao truoc;
            for(int j = 1; j < num; j++){
                int nearLeft = 0, nearRight = 0;
                while(sit[toado - nearLeft] != -1) nearLeft += 1;
                while(sit[toado + nearRight] != -1) nearRight += 1;
                if(toado - nearLeft < 1) nearLeft = maxValue;
                if(toado + nearRight > N) nearRight = maxValue;
                if(nearLeft < nearRight){
                    sit[toado - nearLeft] = i;
                    bonusStep += nearLeft + 1;
                }else{
                    sit[toado + nearRight] = i;
                    bonusStep += nearRight + 1;
                }
            }
            int nearL = 0, nearR = 0;
            while(sit[toado - nearL] != -1) nearL += 1;
            while(sit[toado + nearR] != -1) nearR += 1;
            if(toado - nearL < 1) nearL = maxValue;
            if(toado + nearR > N) nearR = maxValue;
            if(nearL < nearR){
                sit[toado - nearL] = i;
                bonusStep += nearL + 1;
                backtrack(k + 1, stepCount + bonusStep);
                sit[toado - nearL] = -1;
                bonusStep -= nearL + 1;
            }else if(nearL > nearR){
                sit[toado + nearR] = i;
                bonusStep += nearR + 1;
                backtrack(k + 1, stepCount + bonusStep);
                sit[toado + nearR] = -1;
                bonusStep -= nearR + 1;
            }else{
                //...??
                sit[toado - nearL] = i;
                bonusStep += nearL + 1;
                backtrack(k + 1, stepCount + bonusStep);
                sit[toado - nearL] = -1;
                bonusStep -= nearL + 1;
                sit[toado + nearR] = i;
                bonusStep += nearR + 1;
                backtrack(k + 1, stepCount + bonusStep);
                sit[toado + nearR] = -1;
                bonusStep -= nearR + 1;
            }
            for(int j = 1; j < N + 1; j++){
                if(sit[j] == i) sit[j] = -1;
            }
            visited[i] = -1;
            stt[k] = -1;
        }
    }
}
int main(){
    freopen("inp.txt", "r", stdin);
    int test; cin >> test;
    for(int tc = 0; tc < test; tc++){
        cin >> N;
        result = maxValue;
        resetSitdown();
        for(int i = 1; i < 4; i++) cin >> coor[i] >> number[i];
        backtrack(1, 0);
        cout << "Case #" << tc + 1 << endl << result << endl;
    }
    return 0;
}