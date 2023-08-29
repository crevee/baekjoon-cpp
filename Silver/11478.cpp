//BaekJoon_11478
//서로 다른 부분 문자열의 개수


/*
* 제한 시간 : 300ms / 1s
* 메모리 제한 : 2444KB / 512MB
* 정답 비율 : 62.401%
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    int cnt = 0;
    
    cin >> s;
    
    for(int i = 0; i < s.size(); i++){
        vector<string> v;
        for(int j = 0; j< s.size() - i; j++){
            string tmp = s.substr(j, i + 1);
            v.emplace_back(tmp);
        }
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        cnt += v.size();
    }
    cout << cnt;
}
