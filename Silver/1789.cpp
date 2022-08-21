//BaekJoon_1789
//수 들의 합

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 42.305%
*/

#include <iostream>

int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    long long s;
    int num = 1;
    int cnt = 0;
    long long sum = 0;
    
    std::cin >> s;
    
    while(1)
    {
        sum += num;
        cnt ++;
        
        if(sum > s)
        {
            cnt--;
            break;
        }
        num++;
    }

    std::cout << cnt << '\n';
    
return 0;
}
