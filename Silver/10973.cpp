//BaekJoon_10973
//이전 수열


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2156KB / 256MB
* 정답 비율 : 59.473%
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    vector <int> v;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.emplace_back(x);
    }
    
    if(prev_permutation(v.begin(), v.end())){
        for(int i = 0 ; i < n; i++){
            cout << v[i] << ' ';
        }
    }
    else{
        cout << -1;
    }
}
