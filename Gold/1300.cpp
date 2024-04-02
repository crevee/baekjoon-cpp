//BaekJoon_1300
//K번째 수

/*
* 제한 시간 : 32ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 37.740%
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long n, k;

	cin >> n >> k;

	long start = 1, end = k, result = 0;

	while (start <= end) {
		long middle = (start + end) / 2;
		long cnt = 0;

		for (int i = 1; i <= n; i++) {
			cnt += min(middle / i, n);
		}

		if (cnt < k) {
			start = middle + 1;
		}
		else {
			result = middle;
			end = middle - 1;
		}
	}
	cout << result << '\n';

	return 0;
}
