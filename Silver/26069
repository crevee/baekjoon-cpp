//BaekJoon_26069
//붙임성 좋은 총총이


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2160KB / 1024MB
* 정답 비율 : 64.703%
*/

#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    set<string> a{"ChongChong"};
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        string x, y;
        
        cin >> x>> y;
        
        if(a.find(x) != a.end() || a.find(y) != a.end()){
            a.insert(y);
            a.insert(x);
        }
    }
    cout << a.size();
    
    return 0;
}
