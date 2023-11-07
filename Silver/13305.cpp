//BaekJoon_13305
//주유소


/*
* 제한 시간 : 24ms / 2s
* 메모리 제한 : 2800KB / 512MB
* 정답 비율 : 38.259%
*/

#include <iostream>

using namespace std;

int dist[100000];
int cost[100000];

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    
    long long result = 0, now_cost;
    
    cin >> n;
    
    for(int i = 1; i < n ; i++){
        cin >> dist[i];
    }
    
    for(int i = 0 ; i < n ; i++){
        cin >> cost[i];
    }
    
    now_cost = cost[0];
    result = now_cost * dist[1];
    
    for(int i =1; i < n ; i++){
        if(now_cost < cost[i]){
            result += now_cost * dist[i + 1];
        }
        else{
            now_cost = cost[i];
            result += now_cost * dist[i + 1];
        }
    }
    cout << result;
    
    return 0;
}
