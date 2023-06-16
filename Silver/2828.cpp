//BaekJoon_2828
//사과 담기 게임


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 50.068%
*/

#include <iostream>

using namespace std;

int n, m, j;

int main() {
    cin >> n >> m >> j;

    int cnt=0, start=1, end = m;

    while(j--) {
        int x;
        cin >> x;

        bool flag=true;
        
        while(flag) {
            if(start<=x && x<=end) {
                flag=false;
            } else if(start>x){
                start--; end--; cnt++;
            } else {
                start++; end++; cnt++;
            }
        }
    }
    cout << cnt;
}
