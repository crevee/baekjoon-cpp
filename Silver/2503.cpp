//BaekJoon_2503
//숫자 야구

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 47.209%
*/

#include <iostream>
#include <string>

using namespace std;

bool check[1000];

void Check(string str, int strike, int ball){
    int x, y;
    
    for(int i = 123; i < 988; i++){
        if(check[i]){
            continue;
        }
        x = 0;
        y = 0;
        
        string tmp = to_string(i);
        
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                if(str[k] == tmp[j]){
                    if(j == k){
                        x++;
                    }
                    else{
                        y++;
                    }
                }
            }
        }
        if( x != strike || y != ball){
            check[i] = true;
        }
    }
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, a, b, result = 0;
    string tmp;
    
    cin >> n;
    
    for(int i = 0 ; i < n ; i++){
        cin >> tmp >> a>> b;
        Check(tmp, a, b);
    }
    
    int num;
    
    for(int i = 1; i < 10; i++){
        for(int j = 1; j< 10; j++){
            if(i == j){
                continue;
            }
            for(int k = 1; k < 10; k++){
                if(k == i || k == j){
                    continue;
                }
                num = i * 100 + j * 10 + k;
                
                if(!check[num]){
                    result++;
                }
            }
        }
    }
    cout << result;
    
    return 0;
}
