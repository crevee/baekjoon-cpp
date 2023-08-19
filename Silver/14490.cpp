//BaekJoon_14490
//백대열


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 512MB
* 정답 비율 : 72.021%
*/

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int GCD(int a, int b){
    if(b == 0){
        return a;
    }
    else{
        return GCD(b, a % b);
    }
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s, a, b;
    bool flag = false;
    int x, y;
    
    cin >> s;
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ':'){
            flag = true;
            continue;
        }
        else if(!flag){
            a += s[i];
        }
        else{
            b += s[i];
        }
    }
    
    x = stoi(a);
    y = stoi(b);
    
    cout << x / GCD(x, y) << ':' << y /GCD(x,y);
}
