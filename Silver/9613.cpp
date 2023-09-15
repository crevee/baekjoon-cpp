//BaekJoon_9613
//GCD 합


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 41.521%
*/

#include <iostream>

using namespace std;

int a[100];

int GCD(int a, int b){
    if(a % b == 0){
        return b;
    }
    return GCD(b, a % b);
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, n;
    
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n;
        for(int j = 0; j < n; j++){
            cin >> a[j];
        }
        
        long long sum = 0;
        
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                sum += GCD(a[i], a[j]);
            }
        }
        cout << sum << '\n';
    }
    return 0;
}
