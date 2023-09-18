//BaekJoon_10994
//별 찍기 - 19


/*
* 제한 시간 : 4ms / 1s
* 메모리 제한 : 2176KB / 256MB
* 정답 비율 : 68.015%
*/

#include <iostream>

using namespace std;

char a[397][397];

void Square(int len, int row, int col){
    for(int i = 0; i < len; i++){
        if( i == 0 || i == len - 1){
            for(int j = 0; j < len; j++){
                a[row + i][col + j] = '*';
            }
        }
        else{
            a[row + i][col] = '*';
            a[row + i][col + len - 1] = '*';
        }
    }
}

void Draw(int n, int row, int col){
    int len = 4 * n - 3;
    
    Square(len, row, col);
    
    if( n == 1){
        return ;
    }
    Draw(n - 1, row + 2, col + 2);
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    
    cin >> n;
    
    for(int i = 0 ; i < 4 * n - 3 ; i++){
        for(int j = 0; j < 4 * n - 3; j++){
            a[i][j] = ' ';
        }
    }
    
    Draw(n, 0, 0);
    
    for(int i = 0 ; i < 4 * n - 3; i++){
        for(int j = 0; j < 4 * n - 3; j++){
            cout << a[i][j];
        }
        cout << '\n';
    }
    return 0;
}
