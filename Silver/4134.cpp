//BaekJoon_4134
//다음 소수


/*
* 제한 시간 : 256ms / 1s
* 메모리 제한 : 2032KB / 128MB
* 정답 비율 : 25.490%
*/

#include <iostream>
#include <cmath>

using namespace std;


int main(void){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    long long n, m, answer = 0;
    
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n;
        
        bool prime_check = (n < 3) ? true : false;
        
        answer = (n < 3)? 2 : n;
        
        while(!prime_check){
            m = sqrt(n) + 1;
            
            for(int i = 2; i <= m; i++){
                if(n % i == 0){
                    break;
                }
                if(i == m){
                    answer = n;
                    prime_check = true;
                }
            }
            n++;
        }
        cout << answer << '\n';
    }
    return 0;
}
