//BaekJoon_2467
//용액

/*
* 제한 시간 : 12ms / 1s
* 메모리 제한 : 2412KB / 128MB
* 정답 비율 : 36.628%
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int n;

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    
    vector<int> v(n);
    
    for(int i = 0 ; i < n; i++){
        int tmp;
        cin >> tmp;
        
        v[i] = tmp;
    }
    
    int left = 0, right = n  - 1;
    long long result = abs(v[left] + v[right]);
    long long result_a = v[left], result_b = v[right];
    
    while(left < right){
        long long tmp = v[left] + v[right];
        
        if(abs(tmp) < result){
            result = abs(tmp);
            
            result_a = v[left];
            result_b = v[right];
        }
        
        if(tmp < 0){
            left++;
        }
        else{
            right--;
        }
    }
    
    cout << result_a << ' ' << result_b;
}
