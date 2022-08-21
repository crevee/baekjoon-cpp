//BaekJoon_1193
//분수찾기

/*
* 제한 시간 : 0ms / 0.5s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 51.044%
*/

#include <iostream>

int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int x;
    
    std::cin >> x;
    
    int i = 0;
    
    
    while(x > 0)
    {
        ++i;
        x -= i;
    }
    
    if(i % 2 == 1)
    {
        std::cout << 1 - x << '/' << i + x;
    }
    else
    {
        std::cout << i + x << '/' << 1 - x;
    }
    
    return 0;
}
