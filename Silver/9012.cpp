//BaekJoon_9012
//괄호

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 256MB
* 정답 비율 : 44.616%
*/

#include <iostream>
#include <stack>

std::string Check(std::string input)
{
    int len = (int)input.length();
    
    std::stack<char>s;
    
    for(int i = 0 ; i < len; i++)
    {
        if(input[i] == '(')
        {
            s.push(input[i]);
        }
        else if(input[i] == ')')
        {
            if(!s. empty())
            {
                s.pop();
            }
            else
            {
                return "NO";
            }
        }
    }
    
    if(s.empty())
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}


int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int t;
    
    std::cin >> t;
    
    while(t--)
    {
        std::string input;
        std::cin >> input;
        
        std::cout << Check(input) << '\n';
    }
    
return 0;
}
