//BaekJoon_11650
//좌표 정렬하기


/*
* 제한 시간 : 56ms / 1s
* 메모리 제한 : 7536KB / 256MB
* 정답 비율 : 48.110%
*/

#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int n;
    
    std::cin >> n;
    
    std::vector<std::vector<int>> arr(n, std::vector<int>(2,0));
    
    
    for(int i = 0 ; i < n ; i++)
    {
        std::cin >> arr[i][0] >> arr[i][1];
    }
    
    std::sort(arr.begin(), arr.end());
    
    for(int i = 0 ; i < arr.size(); i++)
    {
        std::cout << arr[i][0] << " " << arr[i][1] << '\n';
    }
    
return 0;
}
