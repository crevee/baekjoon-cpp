//BaekJoon_15654
//N과 M(5)

/*
* 제한 시간 : 32ms / 1s
* 메모리 제한 : 2024KB / 512MB
* 정답 비율 : 72.638%
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n,m;
int a[8];

vector<int> v;

bool visited[8];

void Func(int idx){
    if(idx == m){
        for(int i = 0 ; i < m; i++){
            cout << a[i] << ' ';
        }
        cout << '\n';
        
        return;
    }
    for(int i = 0 ; i < v.size(); i++){
        if(visited[i]){
            continue;
        }
        visited[i] = true;
        a[idx] = v[i];
        
        Func(idx + 1);
        visited[i] = false;
    }
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m;
    
    v.resize(n);
    
    for(int i = 0 ; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    
    Func(0);
    
    return 0;
}
