//BaekJoon_2309.cpp
//일곱 난쟁이

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 42.459%
*/

#include <iostream>
#include <algorithm>

int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int a[9];
    int sum = 0;
    
    for(int i = 0; i < 9; i++)
    {
        std::cin >> a[i];
        sum += a[i];
    }
    
    std::sort(a,a + 9);
    
    for(int i = 0; i < 8; i++)
    {
        for(int j = i + 1; j < 9; j++)
        {
            if(sum - a[i] - a[j] == 100)
            {
                for(int k = 0; k < 9; k++)
                {
                    if(k != i && k !=j)
                    {
                        std::cout << a[k] << '\n';
                    }
                }
                return 0;
            }
        }
    }
    return 0;
}
