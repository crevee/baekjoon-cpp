//BaekJoon_25305
//커트라인


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 1024MB
* 정답 비율 : 66.269%
*/

#include <iostream>
#include <algorithm>

int main(){
    std::cin.tie(0);
    std::ios::sync_with_stdio(0);
  
    int n, k;
    int* x;
    
    std::cin >> n >> k;
    
    x = new int[n];
    
    for(int i = 0; i < n ; i++){
        std::cin >> x[i];
    }
    std::sort(x, x + n);
    
    std::cout << x[n - k];
}
