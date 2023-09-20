//BaekJoon_2799
//블라인드


/*
* 제한 시간 : 4ms / 1s
* 메모리 제한 : 2144KB / 128MB
* 정답 비율 : 65.467%
*/

#include <iostream>
#include <string>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    int result[5]{};
    char a[501][501];
    string tmp;
    
    cin >> m >> n;
    
    for(int i = 0 ; i < 4 * m + m + 1; i++){
        for(int j = 0 ; j < 4 * n + n + 1; j++){
            cin >> a[i][j];
        }
    }
    
    for(int i = 1 ; i < n * 5 - 1 ; i += 5){
        for(int j = 1 ; j < m * 5; j++){
            
            if(a[j][i] == '#'){
                continue;
            }
            
            tmp += a[j][i];
            
            if(tmp.length() == 4){
                if(tmp == "...."){
                    result[0]++;
                }
                else if(tmp == "*..."){
                    result[1]++;
                }
                else if(tmp == "**.."){
                    result[2]++;
                }
                else if(tmp == "***."){
                    result[3]++;
                }
                else if(tmp == "****"){
                    result[4]++;
                }
                tmp ="";
            }
        }
    }
    
    for(int i = 0 ; i < 5; i++){
        cout << result[i] << ' ';
    }
    return 0;
}
