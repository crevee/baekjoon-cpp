//BaekJoon_14500
//테트로미노

/*
* 제한 시간 : 80ms / 2s
* 메모리 제한 : 3240KB / 512MB
* 정답 비율 : 36.190%
*/

#include <iostream>

using namespace std;

bool visited[500][500];

int map[500][500];
int dy[4]{-1, 0, 0, 1};
int dx[4]{0, -1, 1, 0};
int n, m, answer;

void DFS(int y, int x, int d, int sum){
    sum += map[y][x];
    visited[y][x] = true;
    
    if(d == 4){
        if(sum > answer){
            answer = sum;
        }
        visited[y][x] = false;
        
        return;
    }
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        
        if(ny >= 0 && ny < n  && nx >= 0 && nx < m){
            if(!visited[ny][nx]){
                DFS(ny, nx, d + 1, sum);
            }
        }
    }
    visited[y][x] = false;
}

void T(int y, int x){
    int sum, dir, ny, nx;
    
    for(int i = 0 ; i < 4; i++){
        sum = map[y][x];
        for(dir = 0; dir < 4; dir++){
            if(dir == i){
                continue;
            }
            ny = y + dy[dir];
            nx = x + dx[dir];
            
            if(ny >= 0 && ny < n && nx >= 0 && nx < m){
                sum += map[ny][nx];
            }
        }
        if(sum > answer){
            answer = sum;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> map[i][j];
        }
    }
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            DFS(i, j, 1, 0);
            T(i, j);
        }
    }
    cout << answer;

    return 0;
}
