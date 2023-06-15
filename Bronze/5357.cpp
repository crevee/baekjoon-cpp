//BaekJoon_5357
//Dedupe

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 77.778%
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    while (n--) {
        string s;
        cin >> s;
        
        char temp = ' ';
        for (int i = 0; i < s.length(); i++) {
            if (temp != s[i]) {
                cout << s[i];
                temp = s[i];
            }
        }
        cout << "\n";
    }
}
