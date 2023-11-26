//BaekJoon_28255
//3단 초콜릿 아이스크림

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2028KB / 1024MB
* 정답 비율 : 24.317%
*/

#include <iostream>
#include <string>

using namespace std;

string s;

void Ice(string &s){
    
    string p_s;
    
    size_t len = size(s);
    
    if(len % 3 != 0){
        len+= 3;
    }
    
    for(size_t i = 0 ; i < len / 3; i++){
        p_s += s[i];
    }
    
    string rp_s = p_s;
    reverse(rp_s.begin(), rp_s.end());
    
    string tail_ps = p_s.substr(1, size(p_s));
    
    
    if(s == p_s + rp_s + p_s || s == p_s + rp_s.substr(1, size(rp_s)) + p_s ||
       s == p_s + rp_s + tail_ps || s == p_s + rp_s.substr(1, size(rp_s)) + tail_ps){
        cout << 1 << '\n';
    }
    else{
        cout << 0 << '\n';
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> s;
        
        Ice(s);
    }
}
