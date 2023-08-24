//BaekJoon_9506
//약수들의 합

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2092KB / 128MB
* 정답 비율 : 53.670%
*/

#include <iostream>

using namespace std;

int main(void){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    int a[50000];

    while(n != -1){
        cin >> n;
        
        if(n <=0){
            return 0;
        }
        
        int sum = 0, p = 0;
        
        for(int i = 1; i <= n / 2; i++){
            if(n % i == 0){
                a[p++] = i;
                sum += i;
            }
        }
        
        if(n == sum){
            cout << n << " = " << a[0];
            
            for(int i = 1; i< p; i++){
                cout << " + " << a[i];
            }
        }
        else{
            cout << n << " is NOT perfect.";
        }
        cout << '\n';
    }
    return 0;
}
