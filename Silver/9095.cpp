//BaekJoon_9095
//1, 2, 3 더하기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 63.775%
*/

#include <iostream>
#include <vector>


std::vector<int> number_result;

int dp(int n){
    
    for(int i = 4; i <= n ; i++){
        int new_number = number_result[i - 3] + number_result[i - 2] + number_result[i - 1];
        number_result.push_back(new_number);
    }
    return number_result[n];
}


int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int t, n;
    
    std::cin >> t;
    
    for(int i = 0 ; i < t; i ++){
        std::cin >> n;
        
        number_result = {0, 1, 2, 4};
        
        if( n <= 3){
            std::cout << number_result[n] << std::endl;
        }
        else{
            std::cout <<dp(n) << std::endl;
        }
    }
    
    return 0;
}
