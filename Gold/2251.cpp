//BaekJoon_2251
//물통

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 9956KB / 128MB
* 정답 비율 : 51.424%
*/

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

bool visited[201][201][201];

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b ,c;
    vector<int> result;
    
    cin >> a >> b >> c;
    
    queue<pair<pair<int, int>, int>> q;
    q.push(make_pair(make_pair(0, 0), c));
    
    while(q.empty() == 0){
        int x = q.front().first.first;
        int y = q.front().first.second;
        int z = q.front().second;

        q.pop();
        
        if(visited[x][y][z]){
            continue;
        }
        
        visited[x][y][z] = true;
        
        if(x == 0){
            result.emplace_back(z);
        }
        
        if(x + y > b)
            q.push(make_pair(make_pair(x + y - b, b), z));
        else
            q.push(make_pair(make_pair(0, x + y), z));
        
        if(x + z > c)
            q.push(make_pair(make_pair(x + y - c, y), c));
        else
            q.push(make_pair(make_pair(0, y), x + z));
        
        if(y + x > a)
            q.push(make_pair(make_pair(a, y + x - a), z));
        else
            q.push(make_pair(make_pair(y + x, 0), z));
        
        if(y + z > c)
            q.push(make_pair(make_pair(x, y + z - c), c));
        else
            q.push(make_pair(make_pair(x, 0), y + z));
        
        if(z + x > a)
            q.push(make_pair(make_pair(a, y), z + x - a));
        else
            q.push(make_pair(make_pair(z + x, y), 0));
        
        if(z + y > b)
            q.push(make_pair(make_pair(x, b), z + y - b));
        else
            q.push(make_pair(make_pair(x, y + z), 0));
    }
    
    sort(result.begin(), result.end());
    
    for(int i = 0; i < result.size() ; i++){
        cout << result[i] << ' ';
    }
    
    return 0;
}
