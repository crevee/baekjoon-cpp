//BaekJoon_1967
//트리의 지름

/*
* 제한 시간 : 4ms / 2s
* 메모리 제한 : 5200KB / 128MB
* 정답 비율 : 40.960%
*/

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<pair<int, int>> tree[100001];
bool visited[100001];

int result = 0, end_point = 0;

void DFS(int x, int len){
    if(visited[x]){
        return;
    }
    
    visited[x] = true;
    if(result < len){
        result = len;
        end_point = x;
    }
    
    for(size_t i = 0; i< tree[x].size(); i++){
        DFS(tree[x][i].first, len + tree[x][i].second);
    }
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n;
    
    cin >> n;
    
    for(size_t i = 0; i < n - 1; i++){
        int p, s, w;
        
        cin >> p >> s >> w;
        
        tree[p].emplace_back(s, w);
        tree[s].emplace_back(p, w);
    }
    DFS(1, 0);
    
    result = 0;
    
    memset(visited, false, sizeof(visited));
    
    DFS(end_point, 0);
    cout << result;
}
