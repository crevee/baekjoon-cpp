//BaekJoon_16236
//아기 상어

/*
* 제한 시간 : 4ms / 2s
* 메모리 제한 : 2028KB / 512MB
* 정답 비율 : 42.876%
*/

#include <iostream>
#include <queue>

using namespace std;

bool stop = false, eat_fish = false;

int n, start_x, start_y, eat_count = 0, shark_size = 2, result = 0;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int map[22][22];

void BFS(int a, int b, bool visited[22][22], int shark_size){
    queue<pair<pair<int ,int>, int>>q;
    q.push(make_pair(make_pair(a, b), 0));
    visited[b][a] = true;
    
    int eat_time = -1;
    
    while(!q.empty()){
        int x = q.front().first.first;
        int y = q.front().first.second;
        int cnt = q.front().second;
        
        if(map[y][x] > 0 && map[y][x] < shark_size && eat_time == cnt){
            if((start_y > y) || (start_y == y && start_x > x)){
                start_x = x;
                start_y = y;
                continue;
            }
        }
        q.pop();
        
        for(int i = 0; i < 4; i++){
            int next_x = x + dx[i];
            int next_y = y + dy[i];
            
            if(next_x >= 0 && next_x < n && next_y >= 0 && next_y < n
               && visited[next_y][next_x] == false){
                if(map[next_y][next_x] <= shark_size){
                    if(map[next_y][next_x] > 0 &&
                       map[next_y][next_x] < shark_size &&
                       eat_fish == false){
                        eat_fish = true;
                        start_x = next_x;
                        start_y = next_y;
                        
                        eat_time = cnt + 1;
                        result += eat_time;
                    }
                    else{
                        q.push(make_pair(make_pair(next_x, next_y), cnt + 1));
                        visited[next_y][next_x] = true;
                    }
                }
            }
        }
    }
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j < n; j++){
            cin >> map[i][j];
            
            if(map[i][j] == 9){
                start_x = j;
                start_y = i;
                map[i][j] = 0;
            }
        }
    }
    
    while(!stop){
        bool visited[22][22]{};
        
        BFS(start_x, start_y, visited, shark_size);
        
        if(eat_fish){
            eat_fish = false;
            eat_count ++;
            map[start_y][start_x] = 0;
            
            if(eat_count == shark_size){
                shark_size++;
                eat_count = 0;
            }
        }else{
            stop = true;
        }
    }
    cout << result;
    
    return 0;
}
