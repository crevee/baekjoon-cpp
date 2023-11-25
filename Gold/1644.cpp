//BaekJoon_1644
//소수의 연속합

/*
* 제한 시간 : 28ms / 2s
* 메모리 제한 : 5712KB / 128MB
* 정답 비율 : 41.192%
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
int n;

void Eratos(int& n){
    vector<bool> prime(n + 1, true);
    
    for(int i = 2; i * i <= n ; i++){
        if(prime[i]){
            for(int j = i * i; j <= n; j += i){
                prime[j] = false;
            }
        }
    }
    
    for(int i = 2; i<= n ;i++){
        if(prime[i]){
            v.emplace_back(i);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    
    if(n == 1){
        cout << 0;
        
        return 0;
    }
    
    Eratos(n);
    
    int start = 0, end = 0, sum = 0, result = 0;
    
    while(end <= v.size()){
        if(sum >= n){
            sum -= v[start++];
        }
        if(sum < n){
            sum += v[end++];
        }
        if(sum == n){
            result++;
        }
    }
    cout << result;
    
    return 0;
}
