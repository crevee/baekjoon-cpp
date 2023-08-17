//BaekJoon_15651
//N과 M(3)

/*
* 제한 시간 : 372ms / 1s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 66.900%
*/

#include <iostream>

using namespace std;

int n, m, a[9];

void Recur(int x){
    if(x == m + 1){
        for(int i =1 ; i <= m ; i++){
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    else{
        for(int i =1 ; i <= n ;i++){
            a[x] = i;
            Recur(x+1);
        }
    }
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m;
    
    Recur(1);
   
    return 0;
}
