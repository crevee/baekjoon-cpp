//BaekJoon_2163.cpp
//초콜릿 자르기

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 71.539%
*/

#include <iostream>

int main(int argc, const char * argv[]) {
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    
    int n, m;
    
    std::cin >> n >> m;
    
    std::cout << n * m - 1;
    
    return 0;
}
