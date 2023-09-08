//BaekJoon_9237
//이장님 초대


/*
* 제한 시간 : 20ms / 1s
* 메모리 제한 : 2412KB / 128MB
* 정답 비율 : 62.918%
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    int* t;
    
    cin >> n;
    
    t = new int[n];
    
    for(int i = 0 ; i < n; i++){
        cin >> t[i];
    }
    sort(t, t + n);
    
    for(int i = 0 ; i < n ; i++){
        t[i] += n + 1 - i;
    }
    
    sort(t, t + n);
    
    cout << t[n - 1];
    
    return 0;
}
