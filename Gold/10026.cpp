//BaekJoon_10026
//적록색약

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2044KB / 512MB
* 정답 비율 : 56.608%
*/

#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

int n;
char map[100][100];
bool visited[100][100];

void BFS(int a, int b){
    queue<pair<int ,int>>q;
    q.push(make_pair(a, b));
    
    int dx[] = {-1, 0, 0, 1};
    int dy[] = {0, -1, 1, 0};
    
    visited[a][b] = true;
    
    while(q.empty() == 0){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for(int i = 0 ; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx >= 0 && ny >= 0 && nx < n && ny < n){
                if(visited[nx][ny] == false){
                    if(map[nx][ny] == map[x][y]){
                        visited[nx][ny] = true;
                        q.push(make_pair(nx, ny));
                    }
                }
            }
        }
    }
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int result_1 = 0, result_2 = 0;
    
    cin >> n;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j < n ; j++){
            cin >> map[i][j];
        }
    }
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n; j++){
            if(visited[i][j] == false){
                BFS(i, j);
                result_1++;
            }
        }
    }
    
    memset(visited, false, sizeof(visited));
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(map[i][j] == 'G'){
                map[i][j] = 'R';
            }
        }
    }
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(visited[i][j] == false){
                BFS(i, j);
                result_2++;
            }
        }
    }
    
    cout << result_1 << ' ' << result_2;
    return 0;
}
