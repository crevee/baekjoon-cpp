//BaekJoon_1913
//달팽이

/*
* 제한 시간 : 104ms / 2s
* 메모리 제한 : 5928KB / 128MB
* 정답 비율 : 45.898%
*/

#include <iostream>

using namespace std;


int dx[4]{0, 1, 0 ,-1};
int dy[4]{1, 0, -1, 0};

int a[1000][1000];

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
   
    int n, k;
    
    cin >> n >> k;
    
    int r = n / 2, cnt = 1;;
    int x = n / 2, y = n / 2;
    
    a[x][y] = cnt;
    
    for(int level = 1; level <= r; level++){
        x--;
        for(int i = 0; i < 4; i++){
            for(int j = 1; j <= level * 2; j++){
                if(i == 0 && j == 1){
                    a[x][y] = ++cnt;
                    continue;
                }
                x += dx[i];
                y += dy[i];
                a[x][y] = ++cnt;
            }
        }
    }
    
    int find_x, find_y;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n; j++){
            cout << a[i][j] << ' ';
            
            if(a[i][j] == k){
                find_x = i;
                find_y = j;
            }
        }
        cout << '\n';
    }
    cout << find_x + 1 << '\n' << find_y + 1;
 
    return 0;
}
