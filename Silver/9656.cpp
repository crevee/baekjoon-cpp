//BaekJoon_9656
//돌게임 2


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 77.215%
*/

#include <iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    
    cin >> n;
    
    if(n % 2 == 1){
        cout << "CY";
    }
    else{
        cout << "SK";
    }
    return 0;
}
