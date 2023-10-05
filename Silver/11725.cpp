//BaekJoon_11725
//트리의 부모 찾기


/*
* 제한 시간 : 48ms / 1s
* 메모리 제한 : 12584KB / 256MB
* 정답 비율 : 42.439%
*/

#include <iostream>
#include <vector>

using namespace std;

int n;
int a[100001];
bool visited[100001];
vector<int> v[100001];

void DFS(int k){
    visited[k] = true;
    
    for(int i = 0 ; i < v[k].size(); i++){
        int next = v[k][i];
        
        if(!visited[next]){
            a[next] = k;
            DFS(next);
        }
    }
}

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int x, y;
        
        cin >> x >> y;
        
        v[x].emplace_back(y);
        v[y].emplace_back(x);
    }
    
    DFS(1);
    
    for(int i = 2; i <= n; i++){
        cout << a[i] << '\n';
    }
   
}
