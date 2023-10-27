//BaekJoon_11404
//플로이드

/*
* 제한 시간 : 24ms / 1s
* 메모리 제한 : 2060KB / 256MB
* 정답 비율 : 41.645%
*/

#include <iostream>

using namespace std;

int cost[101][101];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    
    cin >> n >> m;
    
    for(int i = 1; i<= n ; i++){
        for(int j = 1; j<= n; j++){
            if(i == j){
                cost[i][j] = 0;
            }else{
                cost[i][j] = 987654321;
            }
        }
    }
    
    for(int i = 0 ; i < m ; i++){
        int a, b, c;
        
        cin >> a >> b >> c;
        cost[a][b] = min(cost[a][b], c);
    }
    
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
            }
        }
    }
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j<= n ; j++){
            if(cost[i][j] == 987654321){
                cout << 0 <<' ';
                continue;
            }
            cout << cost[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
