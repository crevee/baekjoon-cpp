//BaekJoon_2530
//평균 점수

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 46.298%
*/

#include<iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, c, d, tmp;
    
    cin >> a >> b >> c;
    
    cin >> d;
    
    tmp = a * 3600 + b * 60 + c + d;
    
    tmp %= 3600 * 24;
    
    a = tmp / 3600;
    b = tmp % 3600 / 60;
    c = tmp % 3600 % 60;
    
    cout << a << ' ' << b << ' ' << c;
}
