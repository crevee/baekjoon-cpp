//BaekJoon_2869
//달팽이는 올라가고 싶다


/*
* 제한 시간 : 0ms / 0.15s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 29.255%
*/

#include <iostream>

int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int a, b, v;
    
    std::cin >> a >> b>> v;
    
    int day = 1;
    
    day += (v-a) / (a - b);
    
    if((v-a)%(a-b) != 0)
    {
        day++;
    }
    if(a >= v)
    {
        std::cout << "1";
    }
    else
    {
        std::cout << day;
    }
    
return 0;
}
