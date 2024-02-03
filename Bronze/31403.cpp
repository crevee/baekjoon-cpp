//BaekJoon_31403
//A + B - C

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 1024MB
* 정답 비율 : 76.762%
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, c;
    
    cin >> a >> b >> c;
    
    cout << a + b - c << '\n';
    
    cout<< stoi(to_string(a) + to_string(b)) - c;
    
    return 0;
}
