//BaekJoon_2846
//오르막길

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 44.781%
*/

#include <iostream>

int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int n;
    int p[1000];
    int ans = 0;
    int l = 1, r = 1;
    
    std::cin >> n;
    
    for(int i = 1; i <= n ; i++){
        std::cin >> p[i];
    }
    for(int i = 1; i <= n - 1; i++){
        if(p[i] < p[i+1]){
            r++;
            ans = std::max(ans, p[r] - p[l]);
        }
        else if(p[i]>= p[i+1]){
            l = i +1;
            r = i + 1;
        }
    }
    std::cout << ans << '\n';
    
    return 0;
}
