//BaekJoon_10157
//자리배정


/*
* 제한 시간 : 4ms / 1s
* 메모리 제한 : 5864KB / 256MB
* 정답 비율 : 38.259%
*/

#include<iostream>
#include<stack>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, C, X;
    stack<int> S;
    
    cin >> N;
        while (N--) {
            cin >> C;
            if (C == 1) {
                cin >> X;
                S.push(X);
            }
            else if (C == 2) {
                if (S.empty()) {
                    cout << "-1\n";
                }
                else {
                    cout << S.top() << "\n";
                    S.pop();
                }
            }
            else if (C == 3) {
                cout << (int)S.size() << "\n";
            }
            else if (C == 4) {
                if (S.empty()) {
                    cout << "1\n";
                }
                else {
                    cout << "0\n";
                }
            }
            else if (C == 5) {
                if (S.empty()) {
                    cout << "-1\n";
                }
                else {
                    cout << S.top() << "\n";
                }
            }
        };
}
