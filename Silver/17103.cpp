//BaekJoon_17103
//골드바흐 파티션


/*
* 제한 시간 : 48ms / 0.5s
* 메모리 제한 : 2996KB / 512MB
* 정답 비율 : 36.589%
*/

#include <iostream>

using namespace std;

bool a[1000001];

int main(void){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    
    cin >> t;
    
    for(int i = 2; i < 1000001; i++){
        a[i] = true;
    }
    
    for(int i = 2; i * i < 1000001; i++){
        if(a[i]){
            for(int j = i * 2; j <= 1000001; j+= i){
                a[j] = false;
            }
        }
    }
    
    for(int i = 0; i < t; i++){
        int n, result = 0;
        
        cin >> n;
        
        for(int i = 0 ; i <= n / 2; i++){
            if(a[i] && a[n - i]){
                result++;
            }
        }
        cout << result << '\n';
    }
    return 0;
}
