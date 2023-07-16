//BaekJoon_14503
//로봇 청소기

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 512MB
* 정답 비율 : 53.730%
*/

#include <iostream>

using namespace std;

int n , m, r, c, d;
bool map[50][50], visited[50][50];

int direct_r[4] = {-1, 0, 1, 0};
int direct_c[4] = {0, 1, 0, -1};

void DFS(int r, int c, int d, int sum){
    for(int i = 0 ; i <4; i++){
        int next_d = (d+3 - i) %4;
        int next_r = r + direct_r[next_d];
        int next_c = c + direct_c[next_d];
        
        if(next_r < 0 || next_r >= n || next_c <0 || next_c >=m || map[next_r][next_c] == 1){
            continue;
        }
        if(visited[next_r][next_c] == 0 && map[next_r][next_c] == 0){
            visited[next_r][next_c] = 1;
            DFS(next_r, next_c, next_d, sum + 1);
        }
    }
    
    int back_idx = d + 2 < 4 ? d+2 :d-2;
    int back_r = r + direct_r[back_idx];
    int back_c = c + direct_c[back_idx];
    
    if(back_r >= 0 && back_r <= n && back_c >= 0 && back_c <=m){
        if(map[back_r][back_c] == 0){
            DFS(back_r, back_c, d, sum);
        }
        else{
            cout << sum << "\n";
            
            exit(0);
        }
    }
}

int main(void){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m;
    
    cin >> r >> c >> d;
    
    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < m; j++){
            cin >> map[i][j];
            visited[i][j] = 0;
        }
    }
    
    visited[r][c] = 1;
    DFS(r,c,d,1);
    
    return 0;
}
