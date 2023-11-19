//BaekJoon_2252
//줄 세우기

/*
* 제한 시간 : 28ms / 2s
* 메모리 제한 : 3944KB / 128MB
* 정답 비율 : 56.883%
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    vector<vector<int>> height;
    vector<int> to;
    
    cin >> n >> m;
    
    height.resize(n + 1);
    to.resize(n + 1);
    
    for(int i = 0 ; i < m; i++){
        int a, b;
        
        cin >> a >> b;
        height[a].emplace_back(b);
        to[b]++;
    }
    queue<int> result;
    
    
    for(int i = 1; i <= n; i++){
        if(to[i] == 0){
            result.push(i);
        }
    }
    
    while(!result.empty()){
        int cur = result.front();
        
        result.pop();
        cout << cur << ' ';
        
        for(auto i : height[cur]){
            if(--to[i] == 0){
                result.push(i);
            }
        }
    }
    return 0;
}
