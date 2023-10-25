//BaekJoon_14395
//4연산

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2160KB / 512MB
* 정답 비율 : 29.127%
*/

#include <iostream>
#include <string>
#include <queue>
#include <set>

using namespace std;

int s, t;
set<long long> BFS_set;
bool check = false;
string dr[4]{"*", "+", "-", "/"};

long long Calculate(long long a, int idx){
    if(idx == 0){
        return a * a;
    }
    else if(idx == 1){
        return a + a;
    }
    else if(idx == 2){
        return a - a;
    }
    else{
        return a / a;
    }
}

string BFS(void){
    queue<pair<long long, string>> q;
    q.push(make_pair(s, ""));
    BFS_set.insert(s);
    
    while(!q.empty()){
        long long x = q.front().first;
        string y = q.front().second;
        q.pop();
        
        if(x == t){
            check = true;
            return y;
        }
        
        for(int i = 0 ; i < 4; i++){
            long long nx = Calculate(x, i);
            
            if(nx < 1){
                continue;
            }
            if(BFS_set.find(nx) != BFS_set.end()){
                continue;
            }
            BFS_set.insert(nx);
            q.push(make_pair(nx, y + dr[i]));
        }
    }
    return "a";
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> s>> t;
    
    if(s == t){
        cout << 0 << '\n';
        
        return 0;
    }
    
    string result = BFS();
    
    if(check){
        cout << result;
    }
    else{
        cout << "-1";
    }
    
    return 0;
}
