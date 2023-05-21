//BaekJoon_11943
//파일 옮기기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 32MB
* 정답 비율 : 67.481%
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
   
    int ans = (b + c) < (a + d) ? (b + c) : (a + d);
    cout << ans << '\n';
}
