//BaekJoon_2668
//숫자고르기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 45.331%
*/

#include<iostream>
#include<cstring>

using namespace std;

int n;
int v[101]{}, result[101]{}, visited[101]{};
int result_index = 0;

void DFS(int current, int start){
    if(visited[current]){
        if(current == start){
            result[result_index++] = start;
        }
    }
    else{
        visited[current] = 1;
        DFS(v[current], start);
    }
}
int main(void){

    cin >> n;
    
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }
    
    for(int i = 1; i <= n ; i++){
        memset(visited, 0, sizeof(visited));
        DFS(i, i);
    }
    
    cout << result_index << '\n';
    
    for(int i = 0 ; i < result_index; i++){
        cout << result[i] << '\n';
    }
    return 0;
}
