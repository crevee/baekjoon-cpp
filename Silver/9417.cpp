//BaekJoon_9417
//최대 GCD

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 66.103%
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int GCD(int a, int b){
    while(b != 0){
        int c = a % b;
        
        a = b;
        b = c;
    }
    return a;
}

int main(void){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    string s;
    
    cin >> n;
    
    cin.ignore();
    
    for(int i = 0 ; i < n; i++){
        int result = 0;
        
        vector<int> v;
        
        getline(cin , s);
        
        string tmp;
        int cur_position = 0;
        int position = s.find(' ', cur_position);
        
        while(position != string::npos){
            tmp = s.substr(cur_position, position - cur_position);
            
            v.emplace_back(stoi(tmp));
            
            position = s.find(' ', cur_position);
            cur_position = position + 1;
        }
        
        for(int i = 0 ; i < v.size() - 1; i++){
            for(int j = i + 1; j < v.size(); j++){
                if(GCD(v[i], v[j]) > result){
                    result = GCD(v[i], v[j]);
                }
            }
        }
        cout << result << '\n';
    }
    return 0;
}
