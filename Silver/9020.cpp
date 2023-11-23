//BaekJoon_9020
//골드바흐의 추측

/*
* 제한 시간 : 176ms / 2s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 39.232%
*/

#include <iostream>

using namespace std;

bool Prime(int x) {
	if (x < 2) {
		return false;
	}

	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;

		int a = n / 2;
		int b = n / 2;

		while (1) {
			if (Prime(a) && Prime(b)) {
				cout << a << ' ' << b << '\n';
				break;
			}
			a--;
			b++;
		}
	}
	return 0;
}
