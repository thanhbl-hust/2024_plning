#include<iostream>

int queue[1000005][3];

bool visited[1005][1005];

int st = -1, en = 0;

void deQueue(){
    st += 1;
}

void enQueue(int row, int col, int step){
    en += 1;
    queue[en][0] = row;
    queue[en][1] = col;
    queue[en][2] = step;
}

int main(){

    freopen("input.txt", "r", stdin);

    int test; cin >> test;

    for(int tc = 0; tc < test; tc++){

        st = -1;
        en = 0;

        int row, col; cin >> row >> col;
        int x, y, X, Y; cin >> x >> y >> X >> y;

        visited[x - 1][y - 1] = true;
        enQueue(x - 1, y - 1, 0);

        int x_bonus = {-1, -2, -2, -1, 1, 2, 2, 1};
        int y_bonus = {-2, -1, 1, 2, 2, 1, -1, -2};

        while(1){
            for(int i = 0; i < 8; i++){
                int r = queue[st + 1][0] + x_bonus[i];
                int c = queue[st + 1][1] + y_bonus[i];
                if(r >= 0 and r < row and c >= 0 and c < col){
                    if(!visited[r][c]){
                        enQueue(r, c, queue[st + 1][2] + 1);
                        visited[r][c] = true;
                    }
                }
            }

            deQueue();
            if(queue[st + 1][0] == X - 1 and queue[st + 1][1] == Y - 1){
                cout << "Case #" << tc + 1 << " " << endl << queue[st + 1][2] << endl;
                break;
            }
        }
    }

    return 0;
}