//BaekJoon_1966
//프린터 큐


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 57.724%
*/

#include <iostream>
#include <queue>

int t, n, m;

int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    std::cin >> t;
    
    while(t--)
    {
        std::vector<int> v;
        std::queue<std::pair<int, int>> q;
        
        int cnt = 0;
        
        std::cin >> n >> m;
        
        for(int i = 0; i < n; i++)
        {
            int x;
            
            std::cin >> x;
            
            v.push_back(x);
            
            if(i == m)
            {
                q.push({x, 1});
            }
            else
            {
                q.push({x,0});
            }
        }
        
        std::sort(v.begin(), v.end());
        
        while(1)
        {
            if(v.back() == q.front().first)
            {
                if(q.front().second == 1)
                {
                    cnt++;
                    break;
                }
                else
                {
                    v.pop_back();
                    q.pop();
                    cnt++;
                }
            }
            else
            {
                q.push({q.front().first,q.front().second});
                q.pop();
            }
        }
        
        std::cout << cnt << "\n";
    }
    
    
    return 0;
}
