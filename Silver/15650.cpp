//BaekJoon_15650
//N과 M(2)


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 74.052%
*/

#include <iostream>
using namespace std;

int n,m;
int arr[9] = {0,};
bool visited[9] = {0,};

void DFS(int num, int cnt)
{
    if(cnt == m)
    {
        for(int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    
    for(int i = num; i <= n; i++)
    {
        if(!visited[i])
        {
            visited[i] = true;
            arr[cnt] = i;
            DFS(i+1,cnt+1);
            visited[i] = false;
        }
    }
}

int main() {
    
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    cin >> n >> m;
    
    DFS(1,0);
}
