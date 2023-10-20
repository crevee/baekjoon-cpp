//BaekJoon_19947
//투자의 귀재 배주형


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 36.102%
*/

#include <iostream>
#include <algorithm>

using namespace std;

int dp[11];

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int h, y;
    
    cin >> h >> y;
    
    dp[0] = h;
    
    for (int i =1; i <= y; i++){
        dp[i] = (int)(dp[i - 1] * 1.05);
        if (i >= 3) {
            dp[i] = max(dp[i],(int)(dp[i-3]* 1.2));
        }
        if (i >= 5) {
            dp[i] = max((int)dp[i], (int)(dp[i - 5] * 1.35));
        }
    }
    cout << dp[y];
    
    return 0;
}
