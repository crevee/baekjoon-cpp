//BaekJoon_2331
//반복수열

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 3148KB / 256MB
* 정답 비율 : 46.853%
*/

#include <iostream>
#include <cmath>

int a, p;
int check[240000];

void Dfs(int num){
    check[num]++;
    
    if(check[num] == 3){
        return;
    }
    
    int next = 0;

    while(num){
        next += pow(num % 10, p);
        num /= 10;
    }
    Dfs(next);
}

int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    std::cin >> a>> p;
    
    Dfs(a);
    
    int count = 0;
    
    for(int i  = 1; i < 240000; i++){
        if(check[i] == 1){
            count ++;
        }
    }
    std::cout << count;
}
