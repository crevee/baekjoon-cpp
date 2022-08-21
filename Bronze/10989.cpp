//BaekJoon_10989
//수 정렬하기 3


/*
* 제한 시간 : 1812ms / 5s
* 메모리 제한 : 2288KB / 8MB
* 정답 비율 : 23.464%
*/

#include <iostream>

int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    
    int n;
    
    std::cin >> n;
    
    int input[100001]{0};
    
    for(int i = 0; i < n ; i++)
    {
        int num;
        
        std::cin >> num;
        
        input[num] +=1;
    }
    
    for(int i =1 ; i < 100001; i++)
    {
        for(int j = 0; j < input[i]; j++)
        {
            std::cout << i << '\n';
        }
    }
    
    return 0;
}

