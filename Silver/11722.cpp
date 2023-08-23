//BaekJoon_11722
//가장 긴 감소하는 부분 수열


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 63.517%
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, sum = 0;
    int* a;
    int* dp;
    
    cin >> n;
    
    a = new int[n];
    dp = new int[n];
    
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    
    for(int i = 0 ; i < n ; i++){
        dp[i] = 1;
        
        for(int j = 0 ; j < i ; j++){
            if(a[i] < a[j]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        sum = max(sum,dp[i]);
    }
    cout << sum;
    
    return 0;
}
