//BaekJoon_14495
//피보나치 비스무리한 수열


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 57.860%
*/

#include <iostream>

using namespace std;

long long dp[117];

int main(void){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    dp[1] = dp[2] = dp[3] = 1;
    
    int n;
    
    cin >> n;
    
    for(int i = 4; i <= n ;i++){
        dp[i] = dp[i - 1] + dp[i - 3];
    }
    
    cout<< dp[n];
    
    return 0;
}
