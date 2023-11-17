//BaekJoon_3019
//테트리스


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 47.806%
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int c, p, result = 0;
vector<int> v;

void buttom(string block){
    size_t len = block.length();
    
    for(size_t i = 0 ; i <= c - len; i++){
        bool flag = true;
        
        for(size_t j = i; j < i + len - 1; j++){
            int now = block[j - i] - '0';
            int next = block[j - i + 1] - '0';
            
            if(now - next != v[j] - v[j + 1]){
                flag = false;
                break;
            }
        }
        if(flag)
            result++;
    }
}

void MakeBlock(){
    switch(p){
        case 1:
            buttom("0");
            buttom("0000");
            break;
        case 2:
            buttom("00");
            break;
        case 3:
            buttom("001");
            buttom("10");
            break;
        case 4:
            buttom("100");
            buttom("01");
            break;
        case 5:
            buttom("000");
            buttom("01");
            buttom("101");
            buttom("10");
            break;
        case 6:
            buttom("000");
            buttom("00");
            buttom("011");
            buttom("20");
            break;
        case 7:
            buttom("000");
            buttom("02");
            buttom("110");
            buttom("00");
            break;
    }
}

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> c >> p;
    
    for(int i = 0 ; i < c; i++){
        int tmp;
        
        cin >> tmp;
        v.emplace_back(tmp);
    }
    
    MakeBlock();
    
    cout << result;
    return 0;
}
