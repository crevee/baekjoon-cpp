//BaekJoon_13251
//조약돌 꺼내기

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 43.149%
*/

#include <iostream>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int m, k, sum = 0;
	int a[50];

	double result = 0;

	cin >> m;

	for (int i = 0; i < m; i++) {
		cin >> a[i];

		sum += a[i];
	}

	cin >> k;

	for (int i = 0; i < m; i++) {
		double tmp = 1.0;

		if (k > a[i]) {
			continue;
		}

		for (int j = 0; j < k; j++) {
			tmp *= double(a[i] - j) / (sum - j);
		}

		result += tmp;
	}

	cout << fixed;
	cout.precision(15);

	cout << result;

	return 0;
}

