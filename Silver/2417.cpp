//BaekJoon_2417
//정수 제곱근


/*
* 제한 시간 : 0ms / 0.4s
* 메모리 제한 : 2032KB / 128MB
* 정답 비율 : 26.962%
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(void){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;
    
    cin >> n;
    
    long long answer = sqrt(n);
    
    if((answer * answer) < n){
        answer++;
    }
    cout << answer;
    
    return 0;
}
