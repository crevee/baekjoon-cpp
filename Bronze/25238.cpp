//BaekJoon_25238
//가희와 방어율 무시

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 50.675%
*/

#include <iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    double a, b;
    
    cin >> a >> b;
      
    if(a * (100 - b) / 100 >= 100){
        cout << 0;}
    else{
        cout << 1;}
    return 0;
}
