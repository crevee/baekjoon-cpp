//BaekJoon_1406
//에디터


/*
* 제한 시간 : 36ms / 0.3s
* 메모리 제한 : 2944KB / 512MB
* 정답 비율 : 26.524%
*/

#include <iostream>
#include <stack>
#include <string>

int main(){
    std::cin.tie(0);
    std::ios::sync_with_stdio(0);
    
    int m;
    std::stack<char> left;
    std::stack<char> right;
    std::string s = "";
    
    std::cin >> s;
    
    for(int i = 0; i < s.length(); i++){
        left.push(s[i]);
    }
    
    std::cin >> m;
    
    for(int i = 0 ; i < m ; i++){
        char mod, c;
        
        std::cin >> mod;
        
        if(mod == 'L'){
            if(!left.empty()){
                right.push(left.top());
                left.pop();
            }
        }
        else if(mod =='D'){
            if(!right.empty()){
                left.push(right.top());
                right.pop();
            }
        }
        else if(mod =='B'){
            if(!left.empty()){
                left.pop();
            }
        }
        else if(mod =='P'){
            std::cin >> c;
            left.push(c);
        }
    }
    
    while(!left.empty()){
        right.push(left.top());
        left.pop();
    }
    
    while(!right.empty()){
        std::cout << right.top();
        right.pop();
    }
}
