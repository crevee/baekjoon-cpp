//BaekJoon_11050
//이항 계수 1

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 64.580%
*/

#include <iostream>

int factorial(int n)
{
    int ans = 1;
    
    for(int i = n; i > 0; i--)
    {
        ans *= i;
    }
    
    return ans;
}


int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int n, k;
    
    std::cin >> n >> k;
    
    std::cout << factorial(n) / (factorial(k) * factorial(n-k));
    
return 0;
}
