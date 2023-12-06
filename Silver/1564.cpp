//BaekJoon_1564
//팩토리얼5


/*
* 제한 시간 : 4ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 19.125%
*/

#include <iostream>

using namespace std;

const long long MOD = 1e12;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long result = 1;
    int n;
    
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        result *= i;
        
        while(result % 10 == 0){
            result /= 10;
        }
        
        result %= MOD;
    }
    printf("%05lld", result % 100000);
    
    return 0;
}
