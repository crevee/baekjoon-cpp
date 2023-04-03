//BaekJoon_10610
//30


/*
* 제한 시간 : 4ms / 1s
* 메모리 제한 : 2300KB / 256MB
* 정답 비율 : 39.214%
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

    string s;

    cin >> s;

    sort(s.begin(), s.end(), greater<>());
    if (s[s.length() - 1] != '0')
        cout << -1;
    else {
        long long sum = 0;
        for (auto o : s) {
            sum += o - '0';
        }
        if (sum % 3 == 0)
            cout << s;
        else
            cout << -1;
    }
}
