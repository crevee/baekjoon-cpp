//BaekJoon_5557
//1학년


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2036KB / 128MB
* 정답 비율 : 44.885%
*/

#include <iostream>

using namespace std;

int a[101];
long long dp[101][21];
long long answer;

int main(void){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    
    cin >> n;
    
    for(int i = 1; i <= n ;i++){
        cin >> a[i];
    }
    dp[1][a[1]] = 1;
    
    for(int i = 2; i <= n - 1; i++){
        for(int j = 0; j <=20; j++){
            if(dp[i - 1][j] == 0){
                continue;
            }
            
            if(j + a[i] <= 20){
                dp[i][j + a[i]] += dp[i - 1][j];
            }
            if(j - a[i] >= 0){
                dp[i][j - a[i]] += dp[i -1][j];
            }
        }
    }
    answer = dp[n - 1][a[n]];
    
    cout << answer;
    
    return 0;
}
