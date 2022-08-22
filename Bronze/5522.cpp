//BaekJoon_5522
//카드 게임

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 84.052%
*/

#include <iostream>

int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int a, sum = 0;
    
    while(std::cin >> a)
    {
        sum += a;
    }
    
    std::cout << sum;
    
    return 0;
}
