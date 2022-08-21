//BaekJoon_10814
//나이순 정렬


/*
* 제한 시간 : 68ms / 3s
* 메모리 제한 : 9852KB / 256MB
* 정답 비율 : 42.740%
*/

#include <iostream>
#include <algorithm>
#include <vector>

bool compare(std::pair<int, std::string> a, std::pair<int, std::string> b)
{
    return a.first < b. first;
}


int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int n;
    
    std::cin >> n;
    
    std::pair<int, std::string> tmp;
    std::vector<std::pair<int, std::string>> arr;
    
    for(int i = 0 ; i < n; i++)
    {
        std::cin >> tmp.first >> tmp.second;
        
        arr.push_back(tmp);
    }
    
    std::stable_sort(arr.begin(), arr.end(), compare);
    
    for(int i = 0; i < n; i++)
    {
        std::cout << arr[i].first << ' ' << arr[i].second << '\n';
    }
    
return 0;
}
