//BaekJoon_5582
//공통 부문 문자열

/*
* 제한 시간 : 56ms / 2s
* 메모리 제한 : 64556KB / 256MB
* 정답 비율 : 42.242%
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int dp[4001][4001]{0,};

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int result = 0;
    string s, t;
    
    cin >> s >> t;
    
    for(size_t i = 0 ; i < s.size(); i++){
        for(size_t j = 0 ; j <t.size(); j++){
            if(s[i] == t[j]){
                dp[i + 1][j + 1] = dp[i][j] + 1;
                result = max(result, dp[i + 1][j + 1]);
            }
        }
    }
    cout << result;
    
    return 0;
}
