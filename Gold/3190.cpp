//BaekJoon_3190
//적록색약

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2064KB / 128MB
* 정답 비율 : 40.431%
*/

#include <iostream>
#include <queue>

using namespace std;

int map[101][101]{0,};
int dx[4]{1, 0, -1, 0};
int dy[4]{0, 1, 0, -1};

int main(){
    
    queue<pair<int, int>>snake;
    queue<pair<int, char>>dir;
    
    int n, k, l;
    
    cin >> n >> k;
    
    for(int i = 0 ; i < k; i++){
        int row, col;
        
        cin >> row >> col;
        
        map[row][col] = 1;
    }
    cin >> l;
    
    for(int i = 0; i < l; i++){
        int x;
        char c;
        
        cin >> x >> c;
        
        dir.emplace(make_pair(x, c));
    }
    
    snake.emplace(make_pair(1, 1));
    map[1][1] = 2;
    
    int x = 1, y = 2, cur_dir = 1, result = 1;
    
    while(1){
        if(x > n || y > n || x < 1 || y < 1){
            break;
        }
        if(map[x][y] == 2){
            break;
        }
        if(!dir.empty()){
            if(result == dir.front().first){
                if(dir.front().second == 'D'){
                    cur_dir = (cur_dir + 3) % 4;
                }
                else{
                    cur_dir = (cur_dir + 1) % 4;
                }
                dir.pop();
            }
        }
        if(map[x][y] == 0){
            snake.emplace(make_pair(x, y));
            map[snake.front().first][snake.front().second] = 0;
            snake.pop();
        }
        else if(map[x][y] == 1){
            snake.emplace(make_pair(x, y));
        }
        map[x][y] = 2;
        
        x = x + dx[cur_dir];
        y = y + dy[cur_dir];
        
        result++;
    }
    cout << result;
    
    return 0;
}
