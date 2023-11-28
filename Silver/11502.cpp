//BaekJoon_11502
//세 개의 소수 문제

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 60.208%
*/

#include <iostream>

using namespace std;

bool a[1001]{1, 1, };

void Prime(int &k) {
	for (int i = 2; i < k; i++) {
		if (!a[i]) {
			for (int j = i; j < k; j++) {
				if (!a[j]) {
					if (!a[k - i - j]) {
						cout << i << ' ' << j << ' ' << k - i - j << '\n';

						return;
					}
				}
			}
		}
	}
	cout << 0 << '\n';

	return;
}

int main() {

	int t, k;

	cin >> t;

	for (int i = 2; i <= 1000; i++) {
		if (!a[i]) {
			for (int j = i * 2; j <= 1000; j += i) {
				a[j] = 1;
			}
		}
	}

	for (int i = 0; i < t; i++) {
		cin >> k;

		Prime(k);
	}

	return 0;
}
