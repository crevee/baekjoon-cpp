//BaekJoon_10815
//숫자 카드


/*
* 제한 시간 : 224ms / 2s
* 메모리 제한 : 7828KB / 256MB
* 정답 비율 : 46.475%
*/

#include <iostream>
#include <vector>
#include <algorithm>


int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int n = 0, m = 0;
    
    std::cin >> n;
    
    std::vector<int> card(n, 0);
    
    for(int i = 0; i < n; i++)
    {
        std::cin >> card[i];
    }
    
    sort(card.begin(), card.end());

    std::cin >> m;
    
    std::vector<int> check(m, 0);
    std::vector<int> answer(m, 0);
    
    for(int i = 0; i < m; i++)
    {
        std::cin >> check[i];
        
        int low = 0;
        int high = n - 1;
        
        while( low <= high)
        {
            int mid = (low + high) / 2;
            
            if(card[mid] == check[i])
            {
                answer[i]++;
                break;
            }
            else if(card[mid] < check[i])
            {
                low = mid + 1;
            }
            else if(card[mid] > check[i])
            {
                high = mid - 1;
            }
        }
    }
    
    for(int i = 0; i < m; i++ )
    {
        std::cout << answer[i] << ' ';
    }

    return 0;
}
