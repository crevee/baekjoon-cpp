//BaekJoon_1016
//제곱ㄴㄴ수

/*
* 제한 시간 : 16ms / 2s
* 메모리 제한 : 2264KB / 512MB
* 정답 비율 : 21.878%
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long min, max;

	cin >> min >> max;

	vector<bool> check(max - min + 1);

	for (long i = 2; i * i <= max; i++) {
		long pow = i * i;

		long start_index = min / pow;

		if (min % pow != 0) {
			start_index++;
		}

		for (long j = start_index; pow * j <= max; j++) {
			check[(int)((j * pow) - min)] = true;
		}
	}

	int cnt = 0;

	for (int i = 0; i <= max - min; i++) {
		if (!check[i]) {
			cnt++;
		}
	}
	cout << cnt << '\n';

	return 0;
}
