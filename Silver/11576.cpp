//BaekJoon_11576
//Base Conversion


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 :2208KB / 256MB
* 정답 비율 : 56.210%
*/

#include <iostream>
#include <stack>
#include <cmath>

using namespace std;

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, m;
    int jinbub = 0;
    
    cin >> a >> b >> m;
    
    for(int i = 0 ; i < m ; i++){
        int tmp;
        
        cin >> tmp;
        
        if(m == 1 && tmp == 0){
            cout << "0\n";
            
            return 0;
        }
        jinbub += (tmp * (int)pow(a, m - i - 1));
    }
    stack<int> result;
    
    while(jinbub != 0){
        result.push(jinbub % b);
        jinbub /= b;
    }
    while(!result.empty()){
        cout << result.top() << ' ';
        result.pop();
    }
    cout << '\n';
    
    return 0;
}
