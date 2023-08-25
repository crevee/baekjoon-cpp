//BaekJoon_10972
//다음 순열

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2180KB / 256MB
* 정답 비율 : 40.696%
*/

#include <iostream>
#include <vector>

using namespace std;

bool NextPermutation(vector<int> &v, int n){
    int i = n - 1;
    
    while(i >0 && v[i - 1] >= v[i]){
        i -= 1;
    }
    
    if(i <= 0){
        return false;
    }
    
    int j = n - 1;
    
    while(v[j] <= v[i - 1]){
        j -= 1;
    }
   
    int temp;
    
    temp = v[i - 1];
    v[i - 1] = v[j];
    v[j] = temp;
    
    j = n - 1;
    
    while(i < j){
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        
        i += 1;
        j -= 1;
    }
    return true;
}

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    
    cin >> n;
    
    vector<int> v(n);
    
    for(int i = 0 ; i < n; i ++){
        cin >> v[i];
    }
    
    if(NextPermutation(v, n)){
        for(int i = 0 ; i < n; i++){
            cout << v[i] << ' ';
        }
        cout << '\n';
    }
    else{
        cout << -1 << '\n';
    }
    return 0;
}
