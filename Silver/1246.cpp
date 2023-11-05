//BaekJoon_1246
//온라인 판매

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 43.057%
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m, idx = 0, result = 0;
    
    cin >> n >> m;
    
    int *a = new int[m];
    
    for(int i = 0 ; i < m; i++){
        cin >> a[i];
    }
    
    sort(a, a + m, greater<int>());
    
    for(int i = 0; i < m ; i++){
        if(i < n){
            if(a[i] * (i + 1) > result){
                result = a[i] * (i + 1);
                idx = i;
            }
        }
        else{
            break;
        }
    }
    cout << a[idx] << ' ' << result;
    
    return 0;
}
