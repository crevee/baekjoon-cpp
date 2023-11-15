//BaekJoon_1388
//바닥 장식


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2040KB / 128MB
* 정답 비율 : 67.292%
*/

#include <iostream>

using namespace std;

int n, m, cnt = 0;
char a[101][101], now = '-';
bool visited[101][101];

void DFS(int i, int j){
    if(a[i][j] != now){
        return;
    }
    
    visited[i][j] = true;
    
    if(a[i][j] == '-'){
        if(j + 1 < m){
            if(!visited[i][j + 1]){
                DFS(i, j + 1);
            }
        }
    }
    else if(a[i][j] == '|'){
        if(i + 1 < n){
            if(!visited[i + 1][j]){
                DFS(i + 1, j);
            }
        }
    }
}

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m; j++){
            cin >> a[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!visited[i][j]){
                visited[i][j] = true;
                
                cnt++;
                
                if(a[i][j] == '-'){
                    if(j + 1 < m){
                        if(!visited[i][j + 1]){
                            now = '-';
                            DFS(i, j + 1);
                        }
                    }
                }
                else if(a[i][j] == '|'){
                    if(i + 1 < n){
                        if(!visited[i + 1][j]){
                            now = '|';
                            DFS(i + 1, j);
                        }
                    }
                }
            }
        }
    }
    cout << cnt;
    
    return 0;
}
