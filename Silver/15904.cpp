//BaekJoon_15904
//UCPC는 무엇의 약자일까?


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 512MB
* 정답 비율 : 40.792%
*/

#include <iostream>
#include <string>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s, result = "";
    
    getline(cin, s);
    
    for(int i = 0 ; i < s.length(); i++){
        if(s[i] == 'U' && result.empty()){
            result += 'U';
        }
        else if(s[i] == 'C' && result == "U"){
            result += 'C';
        }
        else if(s[i] == 'P' && result == "UC"){
            result += 'P';
        }
        else if(s[i] == 'C' && result == "UCP"){
            result += 'C';
        }
    }
    
    if(result == "UCPC"){
        cout << "I love UCPC" << '\n';
    }
    else{
        cout << "I hate UCPC" << '\n';
    }
    return 0;
}
