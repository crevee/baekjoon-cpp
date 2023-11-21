//BaekJoon_2531
//회전 초밥

/*
* 제한 시간 : 4ms / 1s
* 메모리 제한 : 2148KB / 256MB
* 정답 비율 : 35.957%
*/

#include <iostream>
#include <algorithm>

using namespace std;

int sushi[30000];
int kind[3001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, d, k, c;
    int result = 0, cnt = 0;
    
    cin >> n >> d >> k >> c;
    
    for(int i = 0 ; i < n; i++){
        cin >> sushi[i];
    }
    
    int start = 0, end = k - 1;
    
    for(int i = 0; i < k; i++){
        kind[sushi[i]]++;
        
        if(kind[sushi[i]] == 1){
            cnt ++;
        }
    }
    kind[c]++;
    
    if(kind[c] == 1){
        cnt++;
    }
    
    while(start < n){
        result = max(result, cnt);
        
        if(--kind[sushi[start++]] == 0){
            cnt--;
        }
        end = (++end) % n;
        
        if(++kind[sushi[end]] == 1){
            cnt++;
        }
    }
    cout << result;
}
