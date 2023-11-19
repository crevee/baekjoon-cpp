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

vector<int> height[32001];
bool visited[32001];

void DFS(int & cur){
    if(visited[cur]){
        return;
    }
    
    for(int i : height[cur]){
        if(!visited[i]){
            DFS(i);
        }
    }
    visited[cur] = true;
    cout << cur << ' ';
}

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    
    cin >> n >> m;
    
    height -> resize(n + 1);
    
    
    for(int i = 0 ; i <m; i++){
        int a, b;
        
        cin >> a >> b;
        
        height[b].emplace_back(a);
    }
    queue<int> q;
    
    for(int i = 1; i<= n ;i++){
        if(height[i].empty()){
            visited[i] = true;
            cout << i << ' ';
        }
        else{
            q.push(i);
        }
    }
    
    while(!q.empty()){
        int cur = q.front();
        
        q.pop();
        
        if(visited[cur]){
            continue;
        }
        else{
            DFS(cur);
        }
    }
    
    return 0;
}
