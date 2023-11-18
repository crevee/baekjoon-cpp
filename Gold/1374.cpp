//BaekJoon_1374
//강의실

/*
* 제한 시간 : 48ms / 2s
* 메모리 제한 : 168KB / 128MB
* 정답 비율 : 45.295%
*/

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, class_num, start_time, end_time, result = 1;
    vector<pair<int ,int>> v;
    priority_queue<int, vector<int>, greater<int>> final_class;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> class_num >> start_time >> end_time;
        v.emplace_back(start_time, end_time);
    }
    sort(v.begin(), v.end());
    
    for(size_t  i = 0; i < v.size(); i++){
        int st = v[i].first;
        int et = v[i].second;
        
        if(final_class.empty()){
            final_class.push(et);
        }
        else{
            if(final_class.top() > st){
                result++;
            }
            else{
                final_class.pop();
            }
            final_class.push(et);
        }
    }
    cout << result;
    
    return 0;
}
