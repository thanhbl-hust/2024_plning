#include<iostream>
using namespace std;
int count[15];
int board[11][1000];
int getLength(string s){
    int cnt = 0;
    while(s[cnt] != '\0') cnt += 1;
    return cnt;
}

char stoi(int n){
    if(n == 0) return '0';
    if(n == 1) return '1';
    if(n == 2) return '2';
    if(n == 3) return '3';
    if(n == 4) return '4';
    if(n == 5) return '5';
    if(n == 6) return '6';
    if(n == 7) return '7';
    if(n == 8) return '8';
    if(n == 9) return '9';
    return '?';
}

int toi(char c){
    if(c == '0') return 0;
    if(c == '1') return 1;
    if(c == '2') return 2;
    if(c == '3') return 3;
    if(c == '4') return 4;
    if(c == '5') return 5;
    if(c == '6') return 6;
    if(c == '7') return 7;
    if(c == '8') return 8;
    if(c == '9') return 9;
    return -1;
}

int stringtoINT(string num){
    int res = 0;
    int length = getLength(num);
    for(int i = 0; i < length; i++){
        res = res * 10 + toi(num[i]);
    }
    return res;
}

string reverse(string ss){
    int l = 0;
    int r = getLength(ss) - 1;
    while(l < r){
        char c = ss[l];
        ss[l] = ss[r];
        ss[r] = c;
        l += 1;
        r -= 1;
    }
    return ss;
}

string inttoSTRING(int num, int length){
    string ss = "";
    while(num != 0){
        ss += stoi(num % 10);
        num /= 10;
    }
    while(getLength(ss) < length) ss = '0' + ss;
    ss = reverse(ss);
    return ss;
}

string swap(string ss, int l, int r){
    char c = ss[l];
    ss[l] = ss[r];
    ss[r] = c;
    return ss;
}

bool isExisted(int number, int n){
    for(int i = 0; i < count[n]; i++){
        if(board[n][i] == number) return true;
    }
    return false;
}

int solve(string num, int step, int length){
    board[0][0] = stringtoINT(num);
    for(int i = 0; i < step; i++){
        for(int j = 0; j < count[i]; j++){
            string number = inttoSTRING(board[i][j], length);
            for(int a = 0; a < length - 1; a++){
                for(int b = a + 1; b < length; b++){
                    number = swap(number, a, b);
                    if(!isExisted(stringtoINT(number), i + 1)){
                        board[i + 1][count[i + 1]] = stringtoINT(number);
                        count[i + 1] += 1;
                    }
                }
            }
        }
    }
    int maxVal = -1;
    for(int i = 0; i < count[step]; i++){
        if(maxVal < board[step][i]){
            maxVal = board[step][i];
        }
    }
    return maxVal;
}


int main(){
    freopen("money.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int test; cin >> test;
    for(int tc = 0; tc < test; tc++){
        for(int i = 0; i < 15; i++) count[i] = 0;
        count[0] = 1;
        string num; int step; cin >> num >> step;
        int length = getLength(num);
        cout << "Case #" << tc + 1 << endl << solve(num, step, length) << endl;
    }

    return 0;
}