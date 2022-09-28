//BaekJoon_1934
//최소공배수

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 58.107%
*/

#include <iostream>

int GCD(int a, int b){
    int r;
    
    while(b != 0){
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}


int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int t, a, b;
    
    std::cin >> t;
    
    for(int i = 0; i < t; i++){
        std::cin >> a >> b;
        std::cout << (a*b) / GCD(a, b) << '\n';
    }
    
    return 0;
}
