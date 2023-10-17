//BaekJoon_9063
//대지

/*
* 제한 시간 : 8ms / 1s
* 메모리 제한 : 2412KB / 128MB
* 정답 비율 : 65.511%
*/

#include <iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    int min_x = 100000; int max_x = -100000;
    int min_y = 100000; int max_y = -100000;
    
    cin >> n;
    
    int* x = new int[n];
    int* y = new int[n];
    
    for(int i = 0 ; i <n; i++){
        cin >> x[i] >> y[i];
        
        if(min_x > x[i]){
            min_x = x[i];
        }
        if(max_x < x[i]){
            max_x = x[i];
        }
        if(min_y > y[i]){
            min_y = y[i];
        }
        if(max_y < y[i]){
            max_y = y[i];
        }
    }
    cout << (max_x - min_x) * (max_y - min_y);
    
    return 0;
}
