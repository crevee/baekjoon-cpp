//BaekJoon_3040
//백설 공주와 일곱 난쟁이

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 68.706%
*/

#include <iostream>

using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a[9], sum = 0;
    int result_1 = 0, result_2 = 0;
    
    for(int i = 0 ; i< 9;i++){
        cin >> a[i];
        
        sum += a[i];
    }
    
    for(int i = 0 ; i < 9; i++){
        for(int j = i + 1; j < 9; j++){
            if(sum - a[i] - a[j] == 100){
                result_1 = i;
                result_2 = j;
            }
        }
    }
    
    for(int i = 0 ; i < 9; i++){
        if(i == result_1 || i == result_2){
            continue;
        }
        else{
            cout << a[i] << '\n';
        }
    }
    return 0;
}
