//BaekJoon_10820
//문자열 분석

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 256MB
* 정답 비율 : 41.136%
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;
    
    while(getline(cin , s)){
        int a = 0, b = 0, c = 0, d = 0;
        
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                a++;
            }
            else if(s[i] >= 'A' && s[i] <= 'Z'){
                b++;
            }
            else if(s[i] >= '0' && s[i] <= '9'){
                c++;
            }
            else if(s[i] == ' '){
                d++;
            }
        }
        cout << a << " " << b << " " << c << " " << d << "\n";
    }
}
