//BaekJoon_14582
//오늘도 졌다


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 64MB
* 정답 비율 : 39.790%
*/

#include <iostream>

using namespace std;

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    bool check = false;
    int a[9], b[9], a_sum = 0, b_sum = 0;
    
    for(int i = 0 ; i < 9; i++){
        cin >> a[i];
    }
    
    for(int i = 0; i < 9; i++){
        cin >> b[i];
    }
    
    for(int i = 0 ; i < 9; i++){
        a_sum += a[i];

        if(a_sum > b_sum){
            check = true;
        }
        
        b_sum += b[i];
        
        if(a_sum > b_sum){
            check = true;
        }
        
    }
    
    if(check == true && a_sum < b_sum){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}
