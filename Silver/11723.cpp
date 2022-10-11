//BaekJoon_11723
//집합

/*
* 제한 시간 : 680ms / 1.5s
* 메모리 제한 : 2024KB / 4MB
* 정답 비율 : 29.394%
*/

#include <iostream>
#include <string>

int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    
    int m , value = 0, result = 0;
    std::string your_command;
    
    std::cin >> m;
    
    for(int i = 0 ; i < m ; i++){
       
        std::cin >> your_command;
        
        if(your_command == "add"){
            
            std::cin >> value;
            result |= (1 << value);
        }
        else if(your_command == "remove"){
            
            std::cin >> value;
            result &= ~(1 << value);
        }
        else if(your_command == "check"){
            
            std::cin >> value;
            
            if(result & (1 << value)){
                std::cout << 1 << '\n';
            }
            else{
                std::cout << 0 << '\n';
            }
        }
        else if(your_command == "toggle"){
            
            std::cin >> value;
            result ^= (1 << value);
        }
        else if(your_command == "all"){
            
            result = (1 << 21) - 1;
        }
        else if(your_command == "empty"){
            result = 0;
        }
    }
    return 0;
}
