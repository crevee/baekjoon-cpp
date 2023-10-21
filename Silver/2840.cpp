//BaekJoon_2840
//행운위 바퀴

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 22.703%
*/

#include <iostream>
#include <vector>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k, now = 0;

    cin >> n >> k;
    
    vector<char> v(n);
    
    for(int i = 0; i < n ; i++){
        v[i] = '?';
    }
    
    for(int i = 0 ; i < k; i++){
        int s;
        char c;
        
        cin >> s >> c;
        s %= n;
        now -= s;
        
        if(now < 0){
            now += n;
        }
        if(v[now] != '?' && v[now] != c){
            cout << "!\n";
            
            return 0;
        }
        else{
            v[now] = c;
        }
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n ; j++){
            if(v[i] != '?' && v[i] == v[j]){
                cout << "!\n";
                
                return 0;
            }
        }
    }
    
    int rot = n;
    
    while(rot--){
        cout << v[now];
        now++;
        
        if(now == n){
            now = 0;
        }
    }
    cout << '\n';
    
    return 0;
}
