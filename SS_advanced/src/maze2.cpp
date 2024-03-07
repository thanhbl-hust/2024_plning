#include<iostream>
using namespace std;
char matrix[105][105];
bool visited[105][105];
int queue[10005][3];
int x_root, y_root;
int st = -1, en = 0;
void deQueue(){
    st += 1;
}
void enQueue(int value, int row, int col){
    en += 1;
    queue[en][0] = value;
    queue[en][1] = row;
    queue[en][2] = col;
}
int toNum(char c){
    if(c == '2') return 2;
    if(c == '3') return 3;
    if(c == '0') return 0;
    return 1;
}
int main(){
    freopen("maze2.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    for(int i = 0; i < 10; i++){
        for(int a = 0; a < 100; a++){
            for(int b = 0; b < 100; b++){
                visited[a][b] = false;
            }
        }
        st = -1, en = 0;
        int test; cin >> test;
        for(int a = 0; a < 100; a++){
            for(int b = 0; b < 100; b++){
                cin >> matrix[a][b];
                if(matrix[a][b] == '2'){
                    x_root = a;
                    y_root = b;
                    visited[a][b] = true;
                }
            }
        }
        int res = 0;
        queue[0][0] = 2;
        queue[0][1] = x_root;
        queue[0][2] = y_root;
        while(1){
            int row = queue[st + 1][1];
            int col = queue[st + 1][2];
            if(matrix[row + 1][col] != '1' and visited[row + 1][col] == false){
                enQueue(toNum(matrix[row + 1][col]), row + 1, col);
                visited[row + 1][col] = true;
            }
            if(matrix[row][col + 1] != '1' and visited[row][col + 1] == false){
                enQueue(toNum(matrix[row][col + 1]), row, col + 1);
                visited[row][col + 1] = true;
            }
            if(matrix[row - 1][col] != '1' and visited[row - 1][col] == false){
                enQueue(toNum(matrix[row - 1][col]), row - 1, col);
                visited[row - 1][col] = true;
            }
            if(matrix[row][col - 1] != '1' and visited[row][col - 1] == false){
                enQueue(toNum(matrix[row][col - 1]), row, col - 1);
                visited[row][col - 1] = true;
            }
            deQueue();
            if(st == en) break;
            if(queue[en][0] == 3){
                res = 1;
                break;
            }
        }
        cout << "#" << " " << test << " " << res << endl;

        for(int a = 0; a < 100; a++){
            for(int b = 0; b < 100; b++){
                cout << visited[a][b] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}