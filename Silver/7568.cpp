//BaekJoon_7568
//덩치

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 55.721%
*/

#include <iostream>
#include <vector>


int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    std::vector<std::pair<int, int >> v;
    int arr[51];
    int n;
    
    std::cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        int kg, cm;
        
        std::cin >> kg >> cm;
        
        v.push_back(std::make_pair(kg, cm));
    }
    
    for(int i = 0; i < n; i++)
    {
        arr[i] = 1;
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(v[i].first < v[j].first && v[i].second < v[j].second)
            {
                arr[i]++;
            }
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        std::cout << arr[i] << ' ';
    }
    
    return 0;
}
