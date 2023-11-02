//BaekJoon_7562
//나이트의 이동

/*
* 제한 시간 : 24ms / 1s
* 메모리 제한 : 2600KB / 256MB
* 정답 비율 : 51.054%
*/

#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int start_x, start_y, end_x, end_y, l;

int map[301][301];
bool visited[301][301];
int dx[8]{-1, 1, 2, 2, 1, -1, -2, -2};
int dy[8]{2, 2, 1, -1, -2, -2, -1, 1};

queue<pair<int, int>>q;

void BFS(int &start_x, int &start_y){
    q.push({start_x, start_y});
    
    visited[start_x][start_y] = true;
    
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        
        q.pop();
        
        if(x == end_x && y == end_y){
            cout << map[x][y] << '\n';
            
            while(!q.empty()){
                q.pop();
            }
            break;
        }
        
        for(int i = 0 ; i < 8; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(0 <= nx && 0 <= ny && nx < l && ny < l
               && !visited[nx][ny]){
                q.push({nx, ny});
                visited[nx][ny] = true;
                map[nx][ny] = map[x][y] + 1;
            }
        }
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    
    cin >> t;
    
    for(int i = 0 ; i < t; i ++){
        cin >> l;
        cin >> start_x >> start_y;
        cin >> end_x >> end_y;
        
        BFS(start_x, start_y);
        
        while(!q.empty()){
            q.pop();
        }
        memset(visited, 0, 301);
        memset(map, 0, 301);
    }
    return 0;
}
