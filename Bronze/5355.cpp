//BaekJoon_5355
//화성 수학

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 57.371%
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    
    int t;
    float n;
    string s;
    
    cin >> t;
    
    for(int i = 0 ; i < t; i++){
        cin >> n;
        
        getline(cin ,s);
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '@'){
                n *= 3;
            }
            else if(s[i] == '%'){
                n += 5;
            }
            else if(s[i] == '#'){
                n -= 7;
            }
        }
        printf("%.2f\n", n);
    }
   
    return 0;
}
