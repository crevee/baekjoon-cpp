//BaekJoon_1912
//연속합

/*
* 제한 시간 : 8ms / 1s
* 메모리 제한 : 2800KB / 128MB
* 정답 비율 : 34.388%
*/

#include <iostream>

int a[100000];
int d[100000];


int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int n;
    int ans;
    
    std::cin >> n;
    
    for(int i = 0; i < n; i++){
        std::cin >> a[i];
    }
    
    ans = a[0];
    
    for(int i = 0 ; i < n; i++){
        d[i] = a[i];
        
        if(i == 0){
            continue;
        }
        if(d[i] < d[i - 1] + a[i]){
            d[i] = d[i - 1] + a[i];
        }
        if(d[i] > ans){
            ans = d[i];
        }
    }
    
    std::cout << ans << '\n';
    
    return 0;
}
