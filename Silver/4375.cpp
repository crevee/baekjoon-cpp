//BaekJoon_4375
//1


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 32.647%
*/

#include <iostream>

int main(){
    std::cin.tie(0);
    std::ios::sync_with_stdio(0);

    int n, mul, result;
    
    while(std::cin >> n){
        mul = 0;
        
        for(result = 1; result < n; result++){
            mul = (mul * 10 + 1) % n;
            
            if(mul == 0){
                break;
            }
        }
        std::cout << result << '\n';
    }
}
