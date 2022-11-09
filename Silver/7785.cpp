//BaekJoon_7785
//회사에 있는 사람

/*
* 제한 시간 : 72ms / 1s
* 메모리 제한 : 9948KB / 256MB
* 정답 비율 : 40.325%
*/

#include <iostream>
#include <set>
#include <string>

int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int n;
    std::string name, enter;
    std::set<std::string> s;
    
    std::cin >> n;
    
    for(int i = 0 ; i < n ; i++){
        std::cin >> name >> enter;
        
        if(enter == "enter"){
            s.insert(name);
        }
        else{
            s.erase(name);
        }
    }
    
    for(auto it = s.rbegin(); it != s.rend(); it++){
        std::cout << *it << '\n';
    }
    
    
    return 0;
}
