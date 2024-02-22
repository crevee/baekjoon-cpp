//BaekJoon_2033
//반올림

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 41.125%
*/

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, cnt = 0;

	cin >> n;

	if (n < 10) {
		cout << n;

		return 0;
	}

	while (n > 9) {
		if (n % 10 > 4) {
			n /= 10;
			n++;

			cnt++;
		}
		else {
			n /= 10;

			cnt++;
		}
	}

	cout << n;

	for (int i = 0; i < cnt; i++) {
		cout << 0;
	}
	return 0;
}
