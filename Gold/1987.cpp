//BaekJoon_1987
//알파벳

/*
* 제한 시간 : 432ms / 2s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 29.329%
*/

#include <iostream>
#include <algorithm>

using namespace std;

int r, c, max_path = 0;
int visited[26]{};
int dx[4]{-1, 1, 0, 0};
int dy[4]{0, 0, -1, 1};

char board[20][20];


void DFS(int row, int col, int find_path){
    max_path = max(find_path, max_path);
    
    for(int i = 0 ; i < 4; i++){
        int new_row = row + dx[i];
        int new_col = col + dy[i];
        
        if(0 <= new_row && new_row < r && 0 <= new_col && new_col < c){
            if(!visited[((int)board[new_row][new_col]) - 65]){
                visited[((int)board[new_row][new_col]) - 65]++;
                
                DFS(new_row, new_col, find_path + 1);
                
                visited[((int)board[new_row][new_col]) - 65]--;
            }
        }
    }
    
}

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> r >> c;
    
    for(int i = 0 ; i < r; i ++){
        for(int j = 0; j < c; j++){
            cin >> board[i][j];
        }
    }
    
    visited[((int)board[0][0]) - 65]++;
    
    DFS(0, 0, 1);
    
    cout << max_path;
    
    return 0;
}
