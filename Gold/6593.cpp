//BaekJoon_6593
//상범 빌딩

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2208KB / 128MB
* 정답 비율 : 37.416%
*/

#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

bool visited[30][30][30];

int L, R, C;
int dx[] = {0, 0, 1, -1, 0, 0};
int dy[] = {1, -1, 0, 0, 0, 0};
int df[] = {0, 0, 0, 0, -1, 1};

char map[30][30][30];
pair<pair<int, int>, int> start_point, end_point;

int BFS(int a, int b, int c){
    queue<pair<pair<int, int>, pair<int, int>>> q;
    q.push(make_pair(make_pair(a, b), make_pair(c, 0)));
    visited[a][b][c] = true;
    
    while(!q.empty()){
        int floor = q.front().first.first;
        int x = q.front().first.second;
        int y = q.front().second.first;
        int cnt = q.front().second.second;
        q.pop();
        
        if(floor == end_point.first.first && 
           x == end_point.first.second && y == end_point.second){
            return cnt;
        }
        
        for(int i = 0 ; i < 6; i++){
            int next_floor = floor + df[i];
            int next_x = x + dx[i];
            int next_y = y + dy[i];
            
            if(next_floor >= 0 && next_x >= 0 && next_y >= 0
               && next_floor < L && next_x < R && next_y < C){
                if(map[next_floor][next_x][next_y] == '#'){
                    continue;
                }
                if(map[next_floor][next_x][next_y] == '.' ||
                   map[next_floor][next_x][next_y] == 'E'){
                    if(visited[next_floor][next_x][next_y] == false){
                        visited[next_floor][next_x][next_y] = true;
                        q.push(make_pair(make_pair(next_floor, next_x),
                                          make_pair(next_y, cnt + 1)));
                    }
                }
            }
        }
    }
    return -1;
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    while(1){
        memset(visited, false, sizeof(visited));
        
        cin >> L >> R >> C;
        
        if(L == 0 && R == 0 && C == 0){
            return 0;
        }
        
        for(int i = 0 ; i < L; i++){
            for(int j = 0 ; j < R; j++){
                for(int k = 0; k < C; k++){
                    cin >> map[i][j][k];
                    
                    
                    if(map[i][j][k] == 'S'){
                        start_point.first.first = i;
                        start_point.first.second = j;
                        start_point.second = k;
                    }
                    else if(map[i][j][k] == 'E'){
                        end_point.first.first = i;
                        end_point.first.second = j;
                        end_point.second = k;
                    }
                }
            }
        }
        
        int result = BFS(start_point.first.first, start_point.first.second, start_point.second);
        
        if(result == -1){
            cout << "Trapped!" << '\n';
        }
        else{
            cout << "Escaped in " << result << " minute(s)." << '\n';
        }
    }
    return 0;
}
