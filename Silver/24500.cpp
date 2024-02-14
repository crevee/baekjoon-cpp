//BaekJoon_24500
//blobblush


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 1024MB
* 정답 비율 : 42.401%
*/

#include <iostream>

using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n, m = 1;
    
    cin >> n;
    
    while(m < n){
        m = m * 2 + 1;
    }
    
    if(m == n){
        cout << 1 << '\n' << n;
    }
    else{
        cout << 2 << '\n' << (m^n) << '\n' << n;
    }
    
    return 0;
}
