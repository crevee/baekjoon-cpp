//BaekJoon_1074
//Z

/*
* 제한 시간 : 0ms / 0.5s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 38.969%
*/

#include <iostream>

int n, r, c;
int result = 0;

void ZPath(int start_y, int start_x, int line_length){
    
    if(start_y == r && start_x == c){
        std::cout << result;
        
        return;
    }
    
    if(r < start_y + line_length && r >= start_y &&
       c < start_x + line_length && c >= start_x){
        
        ZPath(start_y, start_x, line_length / 2);
        ZPath(start_y, start_x + line_length / 2 , line_length / 2);
        ZPath(start_y + line_length / 2, start_x, line_length / 2);
        ZPath(start_y + line_length / 2, start_x + line_length / 2, line_length / 2);
        
    }
    else{
        result += line_length * line_length;
    }
}



int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    std::cin >> n >> r >> c;
    
    ZPath(0, 0, (1 << n));
    
    
    return 0;
}
