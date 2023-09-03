//BaekJoon_10867
//중복 빼고 정렬하기

/*
* 제한 시간 : 12ms / 1s
* 메모리 제한 : 2920KB / 128MB
* 정답 비율 : 57.467%
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    vector<int> v;
    
    cin >> n;
    
    for(int i = 0 ; i< n ; i++){
        int tmp;
        
        cin >> tmp;
        v.emplace_back(tmp);
    }
    sort(v.begin(), v.end());
    
    v.erase(unique(v.begin(),v.end()), v.end());
    
    for(int i = 0 ; i < v.size(); i++){
        cout << v[i] << ' ';
    }
    return 0;
}
