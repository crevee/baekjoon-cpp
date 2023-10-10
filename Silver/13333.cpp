//BaekJoon_13333
//Q-인덱스


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 39.039%
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main(void){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, result = 0;
    int* a;
    
    cin >> n;
    
    a = new int[n];
    
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    sort(a, a+ n);

    for(int i = 0 ; i < n; i++){
        if(a[i] >= result && n - i >= result){
            result++;
            i--;
        }
        else if(a[i] < result && n - i < result){
            result--;
            break;
        }
        else if(a[i] < result){
            if(i == n - 1){
                result--;
            }
            continue;
        }
        else if(n - i < result){
            result--;
            break;
        }
    }
    cout << result;
    
    return 0;
}
