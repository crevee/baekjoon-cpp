//BaekJoon_6588
//골드바흐의 추측

/*
* 제한 시간 : 68ms / 0.5s
* 메모리 제한 : 3000KB / 256MB
* 정답 비율 : 22.242%
*/

#include <iostream>

using namespace std;

void Func(bool a[], int size){
    a[0] = true;
    a[1] = true;
    
    for(int i = 2; i * i < size; i++){
        if(a[i] == true){
            continue;
        }
        for(int j = i * i; j < size; j += i){
            a[j] = true;
        }
    }
}

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n = 1;
    bool* a = new bool[1000001];
    
    Func(a, 1000001);
    
    while(true){
        cin >> n;
        
        if(n == 0){
            break;
        }
        
        bool flag = false;
        
        for(int i = 3; i < n; i += 2){
            if(!a[i] && !a[n - i]){
                flag = true;
                cout << n << " = " << i << " + " << n - i << '\n';
                break;
            }
        }
        if(!flag){
            cout << "Goldbach's conjecture is wrong.\n";
        }
    }
    return 0;
}
