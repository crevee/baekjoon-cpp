//BaekJoon_18258
//큐 2


/*
* 제한 시간 : 388ms / 1s
* 메모리 제한 : 10424KB / 512MB
* 정답 비율 : 32.248%
*/

#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, x;
    string s;
    queue<int> q;
    
    cin >> n;
    
    for(int i = 0 ; i < n ; i++){
        cin >> s;
        
        if(s == "push"){
            cin >> x;
            q.push(x);
        }
        else if(s == "pop"){
            if(!q.empty()){
                cout << q.front() << '\n';
                q.pop();
            }
            else{
                cout << -1 << '\n';
            }
        }
        else if(s == "size"){
            cout << q.size() << '\n';
        }
        else if(s == "empty"){
            cout << q.empty() << '\n';
        }
        else if(s == "front"){
            if(!q.empty()){
                cout << q.front() << '\n';
            }
            else{
                cout << -1 <<'\n';
            }
        }
        else{
            if(!q.empty()){
                cout << q.back() << '\n';
            }
            else{
                cout << -1 << '\n';
            }
        }
    }
    return 0;
}
