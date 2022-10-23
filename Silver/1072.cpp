//BaekJoon_1072
//게임

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 23.312%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	long long x, y;

	std::cin >> x >> y;

	int z = (y * 100) / x;

	if (z >= 99) {
		std::cout << -1 << '\n';

		return 0;
	}

	int low = 0, high = 1000000000;
	int result = -1;

	while (low <= high) {

		int mid = (low + high) / 2;

		int temp = (100 * (y + mid)) / (x + mid);

		if (z >= temp) {
			result = mid + 1;
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}

	std::cout << result << '\n';
	return 0;
}
