//BaekJoon_11948
//과목 선택

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 75.975%
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a[4], b[2], sum = 0;
    
    for(int i = 0 ; i < 4; i++){
        cin >> a[i];
    }
    sort(a, a + 4);
    
    for(int i = 1; i < 4; i++){
        sum += a[i];
    }
    for(int i = 0; i < 2; i++){
        cin >> b[i];
    }
    sort(b, b + 2);
    
    for(int i = 1; i < 2; i++){
        sum += b[i];
    }
    cout << sum;
    
    return 0;
}
