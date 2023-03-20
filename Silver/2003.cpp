//BaekJoon_2003
//수들의 합 2


/*
* 제한 시간 : 0ms / 0.5s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 48.328%
*/

#include <iostream>

int main(){
    std::cin.tie(0);
    std::ios::sync_with_stdio(0);
    
    int n, m, count = 0;
    
    std::cin >> n >> m;
    
    int a[n+1];
    
    for(int i = 0 ; i < n ; i++){
        std::cin >> a[i];
    }
    
    int start = 0, end = 0;
    int result = a[0];
    
    while(start <= end && end < n){
        if(result < m){
            result += a[++end];
        }
        else if(result == m){
            count++;
            result +=a[++end];
        }
        else if(result > m){
            result -=a[start++];
            
            if(start>end){
                end = start;
                result = a[start];
            }
        }
    }
    std::cout << count;
}
