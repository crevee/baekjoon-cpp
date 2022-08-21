//BaekJoon_11651
//좌표 정렬하기 2


/*
* 제한 시간 : 56ms / 1s
* 메모리 제한 : 7536KB / 256MB
* 정답 비율 : 67.480%
*/

#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int n;
    
    std::cin >> n;
    
    std::vector<std::vector<int>> arr(n, std::vector<int> (2, 0));
    
    for(int i = 0 ; i < n ; i++)
    {
        std::cin >> arr[i][1];
        std::cin >> arr[i][0];
    }
    
    std::sort(arr.begin(), arr.end());
    
    for(int i = 0 ; i < arr.size(); i++)
    {
        std::cout << arr[i][1] << ' ' << arr[i][0] << '\n';
    }
    
    return 0;
}
