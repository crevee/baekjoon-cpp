//BaekJoon_18110
//solved.ac


/*
* 제한 시간 : 32ms / 1s
* 메모리 제한 : 3192KB / 1024MB
* 정답 비율 : 26.138%
*/

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    double sum = 0;
    int* a;
    cin >> n;
    
    if(n == 0){
        cout << 0;
        
        return 0;
    }
    
    a = new int[n];
    
    for(int i = 0; i < n ; i++){
        cin >> a[i];
    }
    
    sort(a, a + n);
    
    int idx = round(n * 0.15);
    
    for(int i = idx; i < n - idx; i++){
        sum += a[i];
    }
    
    cout << round(sum / (n - idx * 2));
    
    return 0;
}
