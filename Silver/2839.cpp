//BaekJoon_2839.cpp
//설탕 배달

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 35.327%
*/

#include <iostream>

int main(){
    
    std::cin.tie(0);
    
    int n;
    
    std::cin >> n;
    
    for(int i = n/5; i >= 0; i--)
    {
        for(int j = n/3; j >= 0; j--)
        {
            if(5 * i + 3 * j == n)
            {
                std::cout << i + j << '\n';
                return 0;
            }
        }
    }
    
std::cout << -1;

return 0;
}
