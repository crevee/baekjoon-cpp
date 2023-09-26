//BaekJoon_2011
//암호코드

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2220KB / 128MB
* 정답 비율 : 20.161%
*/

#include<iostream>
#include<string>

using namespace std;

int dp[50001]{3,};

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    
    cin >> s;

    if(s[0] == '0'){
        cout << '0';
        return 0;
    }
    
    dp[0] = dp[1] = 1;
    
    for(int i = 2; i <= s.length(); i++){
        if(s[i - 1] != '0'){
            dp[i] = dp[i - 1] % 1000000;
        }
        
        int tmp = (s[i -  2] - '0') * 10 + (s[i - 1] - '0');
        
        if(tmp >= 10 && tmp <= 26){
            dp[i] = (dp[i] + dp[i - 2]) % 1000000;
        }
    }
    
    cout << dp[s.length()];
  
    return 0;
}
