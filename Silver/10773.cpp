//BaekJoon_10773
//제로

/*
* 제한 시간 : 8ms / 1s
* 메모리 제한 : 2548KB / 256MB
* 정답 비율 : 67.533%
*/

#include <iostream>
#include <stack>

int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int k, num, sum = 0, cnt = 0;
    
    std::stack<int> s;
    
    std::cin >> k;
    
    for(int i = 0; i < k; i++)
    {
        std::cin >> num;
        
        if(num != 0)
        {
            s.push(num);
            cnt++;
        }
        else
        {
            s.pop();
            cnt--;
        }
    }
    
    for(int i = 0; i < cnt; i++)
    {
        sum += s.top();
        s.pop();
    }
    
    std::cout << sum;
    
    return 0;
}
