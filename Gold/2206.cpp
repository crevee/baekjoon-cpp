//BaekJoon_2206
//벽 부수고 이동하기

/*
* 제한 시간 : 76ms / 2s
* 메모리 제한 : 11624KB / 192MB
* 정답 비율 : 23.214%
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int map[1000][1000][2];
int dx[4] = {-1, 0 , 0, 1};
int dy[4] = {0, -1, 1, 0};

int BFS(int &n, int &m){
    queue<pair<int, pair<int, int>>>q;
    q.push({0, {0, 0}});
    
    while(!q.empty()){
        int broken = q.front().first;
        int x = q.front().second.first;
        int y = q.front().second.second;
        
        q.pop();
        
        if(x == n - 1 && y == m - 1){
            return map[n - 1][m - 1][broken] + 1;
        }
        for(int i = 0 ; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx < 0 || nx >= n || ny < 0 || ny >= m){
                continue;
            }
            if(map[nx][ny][0] == 1){
                if(!broken){
                    map[nx][ny][broken + 1] = map[x][y][broken] + 1;
                    q.push({1, {nx, ny}});
                }
            }
            else if(map[nx][ny][0] == 0){
                if(broken == 1 && map[nx][ny][broken]){
                    continue;
                }
                map[nx][ny][broken] = map[x][y][broken] + 1;
                q.push({broken, {nx, ny}});
            }
        }
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    
    cin >> n >> m;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m; j ++){
            char tmp;
            cin >> tmp;
            
            map[i][j][0] = tmp - '0';
        }
    }
    
    cout << BFS(n, m);
}
