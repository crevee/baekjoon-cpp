//BaekJoon_15486
//퇴사 2

/*
* 제한 시간 : 228ms / 2s
* 메모리 제한 : 32584KB / 512MB
* 정답 비율 : 38.563%
*/

#include <iostream>
#include <vector>

using namespace std;

int dp[1500001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, result = 0;
    vector<pair<int ,int>> v;
    
    cin >> n;
    
    v.emplace_back(0, 0);
    
    int t, p;
    
    for(int i = 0 ; i < n; i++){
        cin >> t >> p;
        v.emplace_back(t, p);
    }
    
    for(int i = 1; i <= n + 1; i++){
        result = max(result, dp[i]);
        
        if(i + v[i].first > n + 1){
            continue;
        }
        dp[i + v[i].first] =
        max(dp[i + v[i].first], result + v[i].second);
    }
    cout << result;
    
    return 0;
}
