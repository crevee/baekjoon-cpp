//BaekJoon_25192
//인사성 밝은 곰곰이

/*
* 제한 시간 : 60ms / 1s
* 메모리 제한 : 8892KB / 1024MB
* 정답 비율 : 46.670%
*/

#include <iostream>
#include <set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, cnt = 0;
    set<string> s;
    string tmp;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> tmp;
        
        if(tmp == "ENTER"){
            cnt += s.size();
            s.clear();
            continue;
        }
        s.insert(tmp);
    }
    cnt += s.size();
    
    cout << cnt;
}
