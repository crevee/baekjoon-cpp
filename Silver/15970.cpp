//BaekJoon_15970
//화살표 그리기

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2276KB / 512MB
* 정답 비율 : 50.883%
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int color[5000];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x, y, n,d = 0;
    
    cin >> n;
    
    vector<vector<int>> v(n + 1);
    
    for(int i = 0 ; i < n; i++){
        cin >> x>> y;
        v[y].emplace_back(x);
        color[y]++;
    }
    
    for(int i = 1; i <= n; i++){
        sort(v[i].begin(), v[i].end());
    }
    for(size_t i = 1; i<= n; i++){
        if(v[i].size() == 0){
            continue;
        }
        for(int j = 0 ; j < color[i]; j++){
            if(j == 0){
                d += v[i][1] - v[i][0];
            }
            else if(j == color[i] - 1){
                d += v[i][color[i] - 1] - v[i][color[i] - 2];
            }
            else{
                int tmp_1 = v[i][j - 1];
                int tmp_2 = v[i][j + 1];
                
                d += min(v[i][j] - tmp_1, tmp_2 - v[i][j]);
            }
        }
    }
    cout << d;
    
    return 0;
}
