//BaekJoon_1439
//뒤집기


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 54.169%
*/

#include <iostream>


int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    std::string s;
    int result = 0;
    
    std::cin >> s;
    
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != s[i+1])
        {
            result ++;
        }
    }
    
    if(!result)
    {
        std::cout << result;
    }
    else
    {
        std::cout << result / 2;
    }
    return 0;
}
