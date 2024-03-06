//BaekJoon_10093
//숫자

/*
* 제한 시간 : 16ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 23.283%
*/

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long a, b;

	cin >> a >> b;

	if (a > b) {
		long long tmp;

		tmp = a;
		a = b;
		b = tmp;
	}

	if (a != b) {
		cout << b - a - 1 << '\n';

		for (long long i = a + 1; i < b; i++) {
			cout << i << ' ';
		}
	}
	else {
		cout << 0;
	}

}
