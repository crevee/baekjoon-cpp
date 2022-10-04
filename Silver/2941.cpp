//BaekJoon_2941
//크로아티아 알파벳

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 44.569%
*/

#include <iostream>
#include <string>


int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    std::string str;
    std::cin >> str;
    
    int idx;
    
    std::string arr[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    
    for(int i = 0; i < 8; i++){
        while(true){
            idx = str.find(arr[i]);
            
            if(idx == std::string::npos){
                break;
            
            }
            str.replace(idx, arr[i].length(), "a");
        }
    }
  
    std::cout << str.length();
    
    return 0;
}
