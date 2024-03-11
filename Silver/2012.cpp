//BaekJoon_2012
//등수 매기기

/*
* 제한 시간 : 80ms / 2s
* 메모리 제한 : 3976KB / 256MB
* 정답 비율 : 38.431%
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    long long result = 0;
    
    cin >> n;
    
    vector<int> v(n);
    
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    for(int i = 1; i <= n ; i++){
        result += abs(v[i - 1] - i);
    }
    
    cout << result;
    
    return 0;
}
