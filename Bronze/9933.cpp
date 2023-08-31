//BaekJoon_9933
//민균이의 비밀번호

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2156KB / 128MB
* 정답 비율 : 41.238%
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int n;
vector<string> v;
vector<string> reverse_v;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    
    for(int i = 0 ; i < n ; i++){
        string tmp;
        
        cin >> tmp;
        v.emplace_back(tmp);
        reverse(tmp.begin(), tmp.end());
        reverse_v.emplace_back(tmp);
    }
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n; j++){
            if(v[i] == reverse_v[j]){
                int len = v[i].length();
                
                cout << len << ' ' << v[i][len / 2];
                
                return 0;
            }
        }
    }
}
