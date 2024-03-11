//BaekJoon_1919
//애너그램 만들기

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 59.046%
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s1, s2;
    
    vector<int> v1(26);
    vector<int> v2(26);
    
    int result = 0;
    
    cin >> s1 >> s2;
    
    for(size_t i = 0 ; i < s1.size(); i++){
        v1[s1[i] - 'a']++;
    }
    
    for(size_t i = 0 ; i < s2.size(); i++){
        v2[s2[i] - 'a']++;
    }
    
    for(int i = 0 ; i < 26;i++){
        result += abs(v1[i] - v2[i]);
    }
    
    cout << result;
    
    return 0;
}
