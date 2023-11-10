//BaekJoon_2170
//선 긋기

/*
* 제한 시간 : 360ms / 1s
* 메모리 제한 : 9840KB / 192MB
* 정답 비율 : 35.451%
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, result = 0;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    
    vector<pair<int, int>>line(n);
    
    for(int i = 0; i < n; i++){
        cin >> line[i].first >> line[i].second;
    }
    
    sort(line.begin(), line.end());
    
    int start_point = line[0].first;
    int end_point = line[0].second;
    
    for(int i = 1; i< n; i++){
        if(end_point < line[i].first){
            result += end_point - start_point;
            start_point = line[i].first;
            end_point = line[i].second;
        }
        else{
            end_point = max(end_point, line[i].second);
        }
    }
    result += end_point - start_point;
    
    cout << result << '\n';
    
    return 0;
}
