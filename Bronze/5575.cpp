//BaekJoon_5575
//타임 카드

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 77.394%
*/

#include <iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int h, m, s, start_time, end_time;
    
    for(int i = 0 ; i < 3; i++){
        cin >> h >> m >> s;
        start_time = h * 3600 + m * 60 + s;
        
        cin >> h >> m >> s;
        end_time = h * 3600 + m * 60 + s;
        
        end_time -= start_time;
        
        cout << end_time / 3600 <<' ' << end_time % 3600 / 60 << ' ' << end_time % 3600 % 60 << '\n';
    }
    return 0;
}
