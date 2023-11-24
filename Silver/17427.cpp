//BaekJoon_17427
//약수의 합 2

/*
* 제한 시간 : 4ms / 0.5s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 39.721%
*/

#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    long long result = 0;
    
    cin >> n;
    
    for(int i = 1; i<= n; i++){
        result += (n/i)* i;
    }
    
    cout << result;
}
