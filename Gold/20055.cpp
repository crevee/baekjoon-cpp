//BaekJoon_20055
//컨베이어 벨트 위의 로봇

/*
* 제한 시간 : 108ms / 1s
* 메모리 제한 : 2024KB / 512MB
* 정답 비율 : 57.298%
*/

#include <iostream>
#include <deque>

using namespace std;

int n, k, result = 1;
deque<int> durability;
deque<bool> convey;

int Check(){
    int cnt = 0;
    
    for(int i = 0 ; i < 2 * n; i++){
        if(durability[i] == 0){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    
    cin >> n >> k;
    
    for(int i = 0 ; i < 2 * n; i++){
        int tmp;
        
        cin >> tmp;
        
        durability.emplace_back(tmp);
        convey.emplace_back(false);
    }
    
    while(true){
        convey.emplace_front(convey.back());
        convey.pop_back();
        
        durability.emplace_front(durability.back());
        durability.pop_back();
        convey[n - 1] = false;
        
        for(int i = n - 2; i >= 0; i--){
            if((!convey[i + 1]) && (durability[i + 1] > 0)
               && convey[i]){
                convey[i] = false;
                convey[i + 1] = true;
                durability[i + 1]--;
            }
        }
        convey[n - 1] = false;
        
        if(!convey[0] && durability[0] > 0){
            convey[0] = true;
            durability[0]--;
        }
        
        if(Check() >= k){
            cout << result;
            
            return 0;
        }
        result++;
    }
    return 0;
}
