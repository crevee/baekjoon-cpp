//BaekJoon_2789
//유학 금지

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 73.707%
*/

#include <iostream>
#include <cstring>

using namespace std;

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    char a[101], b[101];
    bool check = 0;
    
    char s[10]{'C', 'A', 'M', 'B', 'R', 'I', 'D', 'G', 'E'};
    
    cin >> a;
        
    int tmp = 0;
    
    for(int i = 0; i < strlen(a); i++){
        check = false;
        
        for(int j = 0 ; j <9; j++){
            if(s[j] == a[i]){
                check = true;
            }
        }
        if(!check){
            b[tmp] =a[i];
            tmp++;
        }
    }
    cout << b;
        
    return 0;
}
