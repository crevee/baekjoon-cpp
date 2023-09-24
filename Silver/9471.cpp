//BaekJoon_9471
//피사노 주기


/*
* 제한 시간 : 4ms / 1s
* 메모리 제한 : 5220KB / 128MB
* 정답 비율 : 72.634%
*/

#include<iostream>
#include<vector>

using namespace std;

vector<int> v;

void Pisano(int a, int b){
    v.emplace_back(0);
    v.emplace_back(1);
    v.emplace_back(1);
    
    int cnt = 2;
    
    while (1) {
        v.emplace_back((v[cnt] + v[cnt - 1]) % b);
        
        cnt++;
        
        if(v[cnt] == 0 && v[cnt - 1] == 1){
            break;
        }
    }
    cout << a<< ' ' << cnt << '\n';
    
    v.clear();
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, n , m;
    
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n >> m;
        
        Pisano(n, m);
    }
}
