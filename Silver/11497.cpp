//BaekJoon_11497
//통나무 건너뛰기


/*
* 제한 시간 : 40ms / 1s
* 메모리 제한 : 2160KB / 256MB
* 정답 비율 : 59.900%
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    
    cin >> t;
    
    for(int i = 0; i < t; i++){
        int n, result = 0;
        
        cin >> n;
        
        vector<int> a;
        
        for(int j = 0; j < n; j++){
            int tmp;

            cin >> tmp;
            
            a.emplace_back(tmp);
        }
        sort(a.begin(), a.end());
        
        for(int k = 2; k < n; k++){
            int sub = a[k] - a[k - 2];
            result = max(result, sub);
        }
        cout << result << '\n';
    }
    return 0;
}
