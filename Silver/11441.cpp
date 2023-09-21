//BaekJoon_11441
//합 구하기


/*
* 제한 시간 : 40ms / 1s
* 메모리 제한 : 2804KB / 256MB
* 정답 비율 : 51.962%
*/

#include <iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    int* a;
    int* sum;
    
    cin >> n;
    
    a = new int[n];
    sum = new int[n];
    
    cin >> a[0];
    sum[0] = a[0];
    
    for(int i = 1 ; i < n ; i++){
        cin >> a[i];
        
        sum[i] = sum[i - 1] + a[i];
    }
    
    cin >> m;
    
    for(int i = 0 ; i < m ; i++){
        int a, b;
        
        cin >> a >> b;
        
        cout << sum[b - 1] - sum[a - 2] << '\n';
    }
    return 0;
}
