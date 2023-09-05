//BaekJoon_14912
//숫자빈도수


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 80.714%
*/

#include <iostream>

using namespace std;


int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, d, cnt = 0;
    
    cin >> n >> d;
    
    for(int i = 1; i < n + 1; i++){
        int tmp = i;
        
        while(tmp){
            if(tmp % 10 == d){
                cnt += 1;
            }
            tmp /= 10;
        }
    }
    cout << cnt;
    
    return 0;
}
