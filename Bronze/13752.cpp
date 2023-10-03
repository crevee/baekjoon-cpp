//BaekJoon_13752
//히스토그램

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 86.517%
*/

#include<iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;
    
    cin >> n;
    
    for(int i = 0 ; i < n ; i++){
        cin >> k;
        
        for(int j = 0; j < k ; j++){
            cout << '=';
        }
        cout << '\n';
    }
    
    return 0;
}
