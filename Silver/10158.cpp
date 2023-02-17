//BaekJoon_10158
//개미


/*
* 제한 시간 : 0ms / 0.15s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 32.687%
*/

#include <iostream>

int main(){
    std::cin.tie(0);
    std::ios::sync_with_stdio(0);
    
    int w, h, p , q, t;
    
    std::cin >> w>> h >> p >> q >> t;
    
    if((p + t) / w % 2 == 0){
        std::cout << (p + t) % w << ' ';
    }
    else{
        std::cout << w - (p + t) % w << ' ';
    }
    
    if((q+t) / h % 2 ==0 ){
        std::cout << (q + t) % h;
    }
    else{
        std::cout << h - (q+t) % h;
    }
}
