//BaekJoon_17070
//파이프 옮기기 1

/*
* 제한 시간 : 160ms / 1s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 45.915%
*/

#include<iostream>

using namespace std;

int n, answer = 0;
bool map[16][16];
int dr[3]{0, 1, 1};
int dc[3]{1, 0, 1};

bool Collision(int r, int c){
    if(r < 0 || r >= n || c < 0 || c >= n || map[r][c] == 1){
        return true;
    }
    else{
        return false;
    }
}

void DFS(int r, int c, int dir){
    if(r == n - 1&& c == n - 1){
        answer++;
        
        return;
    }
    
    for(int i = 0; i < 3; i++){
        if((dir == 0 && i == 1) || (dir == 1 && i == 0)){
            continue;
        }
        
        int nr = r + dr[i];
        int nc = c + dc[i];
        
        if(Collision(nr, nc) == true){
            continue;
        }
        if(i == 2 && (map[r + 1][c] == 1 || map[r][c + 1] == 1)){
            continue;
        }
        
        DFS(nr, nc, i);
    }
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> map[i][j];
        }
    }
    
    DFS(0, 1, 0);
    
    cout << answer;
    
    return 0;
}
