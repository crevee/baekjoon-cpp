//BaekJoon_24313
//알고리즘 수업 - 점근적 표기 1


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 34.122%
*/

#include <iostream>

using namespace std;

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a0, a1, c, n0;
    
    cin >> a1 >> a0;
    cin >> c;
    cin >> n0;
    
    if(a1 * n0 + a0 <= c * n0 && a1 <= c){
        cout << 1;
    }
    else{
        cout << 0;
    }
    return 0;
}
