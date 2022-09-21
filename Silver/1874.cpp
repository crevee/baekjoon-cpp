//BaekJoon_1874
//스택 수열

/*
* 제한 시간 : 20ms / 2s
* 메모리 제한 : 2552KB / 128MB
* 정답 비율 : 36.550%
*/

#include <iostream>
#include <stack>
#include <vector>

int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    
    std::stack<int> s;
    std::vector<char> result;
    
    int cnt = 1;
    int n;
    
    std::cin >> n;
    
    for(int i = 0; i < n ; i++)
    {
        int x;
        
        std::cin >> x;
        
        while(cnt <= x)
        {
            s.push(cnt);
            
            cnt+=1;
            
            result.push_back('+');
        }
        
        if(s.top() == x)
        {
            s.pop();
            result.push_back('-');
        }
        else
        {
            std::cout << "NO";
            return 0;
        }
    }
    
    for(int i = 0; i < result.size(); i++)
    {
        std::cout << result[i] << '\n';
    }
}
