//BaekJoon_1235
//학생 번호

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2292KB / 128MB
* 정답 비율 : 47.666%
*/

#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<string> v;
    
    int n, result = 1;
    
    cin >> n;
    
    for(int i = 0 ; i < n ; i++){
        string tmp;
        cin >> tmp;
        
        reverse(tmp.begin(), tmp.end());
        v.emplace_back(tmp);
    }
    
    while(true){
        set<string> s;
        
        for(int i = 0 ; i < v.size(); i++){
            s.insert(v[i].substr(0, result));
        }
        
        if(s.size() == v.size())
            break;
        else
            result++;
    }
    cout << result;
    
    return 0;
}
