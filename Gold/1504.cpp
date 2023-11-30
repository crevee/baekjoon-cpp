//BaekJoon_1504
//특정한 최단 경로

/*
* 제한 시간 : 64ms / 1s
* 메모리 제한 : 5744KB / 256MB
* 정답 비율 : 24.808%
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<pair<int ,int>> v[801];

int n, e, v1, v2;
int value[801];

priority_queue<pair<int ,int>, vector<pair<int ,int>>, greater<pair<int, int>>>pq;

void Dij(int &k){
    for(int i = 1; i <= n; i++){
        value[i] = 987654321;
    }
    value[k] = 0;
    
    pq.emplace(make_pair(0, k));
    
    while(!pq.empty()){
        int x = pq.top().first;
        int y = pq.top().second;
        pq.pop();
        
        for(size_t i = 0 ; i < v[y].size(); i++){
            int f = v[y][i].first;
            int s = v[y][i].second;
            
            if(x + s < value[f]){
                value[f] = x + s;
                pq.emplace(make_pair(value[f], f));
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> e;
    
    for(int i = 0 ; i < e; i++){
        int a, b, c;
        
        cin >> a >> b >> c;
        
        v[a].emplace_back(make_pair(b, c));
        v[b].emplace_back(make_pair(a, c));
    }
    
    cin >> v1 >> v2;
    
    long long int v1to1, v1toV2, v1toN, v2to1, v2toN;
    
    Dij(v1);
    
    v1to1 = value[1];
    v1toV2 = value[v2];
    v1toN = value[n];
    
    Dij(v2);
    
    v2to1 = value[1];
    v2toN = value[n];
    
    long long tmp1 = v1to1 + v1toV2 + v2toN;
    long long tmp2 = v2to1 + v1toV2 + v1toN;
    long long answer = tmp1 < tmp2 ? tmp1 : tmp2;
    
    if(answer >= 987654321){
        cout << -1;
        
        return 0;
    }
    cout << answer;
    
    return 0;
}
