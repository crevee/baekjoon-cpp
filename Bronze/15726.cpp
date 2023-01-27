//BaekJoon_15726
//이칙연산

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 30.892%
*/

#include <iostream>

int main(){
    long long a, b, c, x, y;
    
    std::cin>>a>>b>>c;
    
    x = (double)(a * b) / c;
    y = ((double)a / b) * c;
    
    if (x > y)
        std::cout<<x;
    else
        std::cout<<y;
    return 0;
}
