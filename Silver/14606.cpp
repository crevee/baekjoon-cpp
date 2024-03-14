//BaekJoon_14606
//피자(Small)

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 83.580%
*/

#include <iostream>

using namespace std;

int dp[10];

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    
    cin >> n;
    
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;
    
    for(int i = 3; i <= n ;i++){
        int tmp = i /2;
        
        dp[i] = (tmp * (i - tmp)) + dp[tmp] + dp[i - tmp];
    }
    
    cout << dp[n];
    
    return 0;
}
