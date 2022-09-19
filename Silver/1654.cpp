//BaekJoon_1654
//랜선 자르기

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2060KB / 128MB
* 정답 비율 : 21.106%
*/

#include <iostream>
#include <algorithm>

unsigned int ans;
int n, k;
unsigned int list[10000];


int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    std::cin >> k >> n;
    
    unsigned int maxNum = 0;
    
    for(int i = 0; i < k; i++)
    {
        std::cin >> list[i];
        maxNum = std::max(maxNum, list[i]);
    }
    
    unsigned int left = 1, right = maxNum, mid;
    
    while(left <= right)
    {
        mid = (left + right) / 2;
        
        int now = 0;
        
        for(int i = 0; i < k; i++)
        {
            now += list[i] / mid;
        }
        
        if(now >= n)
        {
            left = mid + 1;
            ans = std::max(ans, mid);
        }
        else
        {
            right = mid - 1;
        }
    }
    
    std::cout << ans << '\n';
    
    return 0;
}
