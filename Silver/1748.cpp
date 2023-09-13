//BaekJoon_1748
//수 이어 쓰기 1


/*
* 제한 시간 : 0ms / 0.15s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 48.402%
*/

#include <iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, result = 0;
    
    cin >> n;
    
    for(int i = 1; i<= n ; i *= 10){
        result += n - i + 1;
    }
    cout << result;
    
    return 0;
}
