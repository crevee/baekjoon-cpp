//BaekJoon_2010
//플러그

/*
* 제한 시간 : 24ms / 2s
* 메모리 제한 : 3852KB / 256MB
* 정답 비율 : 56.289%
*/

#include<iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, A=0, cnt=0;
    int p[500001];
    
    cin >> N;
    
    for(int i=0; i<N; i++){
        cin >> p[i];
        A = A + p[i];
        cnt ++;
    }
    cout << A-(cnt-1);
}
