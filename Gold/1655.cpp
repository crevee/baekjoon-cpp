//BaekJoon_1655
//가운데를 말해요

/*
* 제한 시간 : 32ms / 0.1s
* 메모리 제한 : 2792KB / 128MB
* 정답 비율 : 30.436%
*/

#include<iostream>
#include<queue>

using namespace std;


int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    priority_queue<int> max_pq;
    priority_queue<int, vector<int>, greater<int>> min_pq;

    cin >> n;
    
    for(int i = 0 ; i < n ; i++){
        int tmp;
        
        cin >> tmp;
        
        if(max_pq.size() == min_pq.size()){
            max_pq.push(tmp);
        }
        else{
            min_pq.push(tmp);
        }
        
        if(!max_pq.empty() && !min_pq.empty() && max_pq.top() > min_pq. top()){
            int max_num, min_num;
            
            max_num = max_pq.top();
            min_num = min_pq.top();
            
            max_pq.pop();
            min_pq.pop();
            max_pq.push(min_num);
            min_pq.push(max_num);
        }
        cout << max_pq.top() << '\n';
    }
    return 0;
}
