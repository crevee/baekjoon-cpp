//BaekJoon_28278
//스택 2


/*
* 제한 시간 : 144ms / 2s
* 메모리 제한 : 6300KB / 1024MB
* 정답 비율 : 39.758%
*/

#include<iostream>
#include<stack>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, c, x;
    stack<int> s;
    
    cin >> n;
        while (n--) {
            cin >> c;
            if (c == 1) {
                cin >> x;
                S.push(x);
            }
            else if (c == 2) {
                if (s.empty()) {
                    cout << "-1\n";
                }
                else {
                    cout << s.top() << "\n";
                    s.pop();
                }
            }
            else if (c == 3) {
                cout << (int)s.size() << "\n";
            }
            else if (c == 4) {
                if (s.empty()) {
                    cout << "1\n";
                }
                else {
                    cout << "0\n";
                }
            }
            else if (c == 5) {
                if (s.empty()) {
                    cout << "-1\n";
                }
                else {
                    cout << s.top() << "\n";
                }
            }
        };
}
