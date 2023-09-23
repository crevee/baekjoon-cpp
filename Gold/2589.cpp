//BaekJoon_2589
//보물섬

/*
* 제한 시간 : 132ms / 1s
* 메모리 제한 : 2024KB / 512MB
* 정답 비율 : 37.617%
*/

#include<iostream>
#include<cstring>
#include<queue>

using namespace std;

int n,m, result = 0;
char map[50][50];
bool visited[50][50];

int dx[4]{0, 0, -1, 1};
int dy[4]{1, -1, 0, 0};

void BFS(int x, int y){
    int path = 0;
    memset(visited, 0, sizeof(visited));
    
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));
    visited[x][y] = true;
    
    while(!q.empty()){
        int q_size = q.size();
        
        for(int i = 0; i < q_size; i++){
            int cur_x = q.front().first;
            int cur_y = q.front().second;
            
            q.pop();
            
            for(int j = 0; j < 4; j++){
                int nx = cur_x + dx[j];
                int ny = cur_y + dy[j];
                
                if(nx < 0 || ny < 0 || nx >= n || ny >= m){
                    continue;
                }
                if(map[nx][ny] == 'W'){
                    continue;
                }
                if(visited[nx][ny] == true){
                    continue;
                }
                q.push(make_pair(nx, ny));
                visited[nx][ny] = true;
            }
        }
        path++;
    }
    if(result < path -1){
        result = path - 1;
    }
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m; j++){
            cin >> map[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(map[i][j] == 'L'){
                BFS(i, j);
            }
        }
    }
    cout << result;
}
