//BaekJoon_20499
//Darius님 한타 안 함?

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 61.034%
*/

#include <iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k, d, a;
    char tmp;
    
    cin >> k >> tmp >> d  >> tmp >> a;
    
    if(k + a < d || d == 0){
        cout << "hasu";
        
        return 0;
    }
    else{
        cout << "gosu";
    }
    return 0;
}
