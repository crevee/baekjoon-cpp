//BaekJoon_1652
//누울 자리를 찾아라


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 42.025%
*/

#include <iostream>

using namespace std;

int main(void){
    
  ios::sync_with_stdio(false);
  cin.tie(NULL);
    
  bool map[100][100];
  int n;
  int row_result = 0, row_cnt = 0, col_result = 0, col_cnt = 0;
  char c;
  
  cin >> n;
    
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> c;
            
            if(c == '.'){
                map[i][j] = 1;
            }
            else{
                map[i][j] = 0;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(map[i][j] == 1){
                row_cnt++;
            }
            else{
                row_cnt = 0;
            }
            if(row_cnt == 2){
                row_result++;
            }
        }
        row_cnt = 0;
    }
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(map[j][i] == 1){
                col_cnt++;
            }
            else{
                col_cnt = 0;
            }
            if(col_cnt == 2){
                col_result++;
            }
        }
        col_cnt = 0;
    }
    
    cout << row_result << ' ' << col_result;
    
    return 0;
}
