//BaekJoon_1914
//하노이 탑


/*
* 제한 시간 : 128ms / 6s
* 메모리 제한 : 2208KB / 128MB
* 정답 비율 : 23.719%
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void Hanoi(int n, int from, int by, int to){
    cout.tie(NULL);
    
    if(n == 1){
        cout << from << ' ' << to << '\n';
        
        return;
    }
    else{
        Hanoi(n - 1, from, to, by);
        cout << from << ' ' << to << '\n';
        Hanoi(n - 1, by, from, to);
    }
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    
    cin >> n;
    
    string k = to_string(pow(2, n));
    
    int dot = k.find('.');
    
    k = k.substr(0, dot);
    k[k.length() - 1] -= 1;
    cout << k << '\n';
    
    if(n <= 20){
        Hanoi(n, 1, 2, 3);
    }
    return 0;
}
