//BaekJoon_10798
//세로읽기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 51.269%
*/

#include <iostream>
#include <string>

using namespace std;

string s[5];

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    for(int i = 0 ; i < 5; i++){
        cin >> s[i];
    }
    
    for(int i = 0 ; i < 15; i++){
        for(int j = 0; j < 5; j++){
            if(i < s[j].size()){
                cout << s[j][i];
            }
        }
    }
    return 0;
}
