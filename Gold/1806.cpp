//BaekJoon_1806
//부분합

/*
* 제한 시간 : 8ms / 0.5s
* 메모리 제한 : 2412KB / 128MB
* 정답 비율 : 25.767%
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, s;
    
    cin >> n >> s;
    
    vector<int>  v(n);
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    int start = 0, end = 0, sum = 0, result = 987654321;
    
    while(start <= end){
        if(sum >= s){
            result = min(result, end - start);
            sum -= v[start++];
        }
        else if(end == n){
            break;
        }
        else{
            sum += v[end++];
        }
    }
    
    if(result == 987654321){
        cout << 0 << '\n';
    }
    else{
        cout << result << '\n';
    }
    return 0;
}
