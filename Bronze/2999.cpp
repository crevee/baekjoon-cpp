//BaekJoon_2999
//비밀 이메일

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 44.398%
*/

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int r = 0, c = 0, t = 0;

	string s;

	char a[50][50];

	cin >> s;

	for (size_t i = 1; i <= s.size(); i++) {
		if (s.size() % i == 0 && s.size() / i >= i) {
			if (s.size() / i > r) {
				r = i;
				c = s.size() / i;
			}
		}
	}

	for (int i = 0; i < c; i++) {
		for (int j = 0; j < r; j++) {
			a[j][i] = s[t++];
		}
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << a[i][j];
		}
	}
}
