//BaekJoon_4299
//AFC 윔블던

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 29.618%
*/

#include <iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, sum, diff;
    
    cin >> a >> b;
    
    sum = (a + b) / 2;
    diff = (a - b) / 2;
    
    if((a + b) % 2 != 0 || (a - b) % 2 != 0){
        cout << -1 <<'\n';
    }
    else{
        if(sum >= 0 && diff >= 0){
            if(sum >= diff){
                cout << sum << ' ' << diff << '\n';
            }
            else{
                cout << diff << ' ' << sum << '\n';
            }
        }
        else{
            cout << -1 <<'\n';
        }
    }
    return 0;
}
