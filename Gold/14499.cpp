//BaekJoon_14499
//주사위 굴리기

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2028KB / 512MB
* 정답 비율 : 44.708%
*/

#include <iostream>

using namespace std;

int n, m , x, y, k;
int map[21][21];
int move_order[1001];
int dice[6];

int Judgement(int goal){
    if(goal == 1){
        if(y == m - 1){
            return 0;
        }
    }
    else if(goal == 2){
        if(y == 0){
            return 0;
        }
    }
    else if(goal == 3){
        if(x == 0){
            return 0;
        }
    }
    else if(goal == 4){
        if(x == n - 1){
            return 0;
        }
    }
    return 1;
}

void Movement(int goal){
    int tmp = dice[0];
    
    if(goal == 1){
        y++;
        
        dice[0] = dice[3];
        dice[3] = dice[1];
        dice[1] = dice[2];
        dice[2] = tmp;
    }
    else if(goal == 2){
        y--;
        
        dice[0] = dice[2];
        dice[2] = dice[1];
        dice[1] = dice[3];
        dice[3] = tmp;
    }
    else if(goal == 3){
        x--;
        
        dice[0] = dice[4];
        dice[4] = dice[1];
        dice[1] = dice[5];
        dice[5] = tmp;
    }
    else if(goal == 4){
        x++;
        
        dice[0] = dice[5];
        dice[5] = dice[1];
        dice[1] = dice[4];
        dice[4] = tmp;
    }
}

void Roll(){
    for(int i = 0; i < k; i++){
        if(!Judgement(move_order[i])){
            continue;
        }
        Movement(move_order[i]);
        
        if(!map[x][y]){
            map[x][y] = dice[1];
        }
        else{
            dice[1] = map[x][y];
            map[x][y] = 0;
        }
        
        cout << dice[0] << '\n';
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m >> x >> y >> k;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> map[i][j];
        }
    }
    
    for(int i = 0 ; i < k; i++){
        cin >> move_order[i];
    }
    Roll();
    
    return 0;
}
