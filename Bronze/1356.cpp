//BaekJoon_1356
//유진수

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 48.028%
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    
    cin >> s;
    
    for(size_t i = 1; i < s.size(); i++){
        long long left_sum = 1, right_sum = 1;
        
        for(size_t j = 0; j < i; j++){
            left_sum *= s[j] - '0';
        }
        for(size_t k = i; k < s.size(); k++){
            right_sum *= s[k] - '0';
        }
        
        if(left_sum == right_sum){
            cout << "YES";
            
            return 0;
        }
    }
    cout << "NO";
    
    return 0;
}
