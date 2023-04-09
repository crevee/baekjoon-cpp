//BaekJoon_16395
//파스칼의 삼각형


/*
* 제한 시간 : 0ms / 1₩s
* 메모리 제한 : 2024KB / 256MB
* 정답 비율 : 68.220%
*/

#include <iostream>

using namespace std;

int dp[31][31];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    for(int i = 0 ; i < 31; i ++){
        dp[i][0] = 1;
    }
    
    for(int i = 1; i < 31; i ++){
        for(int j = 1;  j<=i; j++){
            dp[i][j] = dp[i - 1][ j  - 1] + dp[i - 1][j];
        }
    }
    int a, b;
    cin >> a >> b;
    
    cout << dp[a - 1][b - 1] << "\n";
}
