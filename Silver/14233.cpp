//BaekJoon_14233
//악덕 사장


/*
* 제한 시간 : 8ms / 2s
* 메모리 제한 : 2536KB / 512MB
* 정답 비율 : 51.210%
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    vector<int> v;
    
    cin >> n;
    
    for(int i = 0 ; i < n ; i++){
        int tmp;
        
        cin >> tmp;
        
        v.emplace_back(tmp);
    }
    
    sort(v.begin(), v.end());
    
    int k = v[0];
    
    for(int i = 1; i < n ; i++){
        int tmp = 0;
        
        if(k * (i + 1) > v[i]){
            tmp = v[i] / (i + 1);
            
            k = tmp;
        }
    }
    
    cout << k;
    
    return 0;
}
