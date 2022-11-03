//BaekJoon_2217
//로프

/*
* 제한 시간 : 12ms / 2s
* 메모리 제한 : 2412KB / 192MB
* 정답 비율 : 42.697%
*/

#include <iostream>
#include <algorithm>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	int result = 0, sum = 0;

	std::cin >> n;

	int* w;
	w = new int[n];



	for (int i = 0; i < n; i++) {
		std::cin >> w[i];
	}

	std::sort(w, w + n);

	for (int i = 0; i < n; i++) {
		long long sum = w[i] * (n - i);

		if (sum > result) {
			result = sum;
		}
	}
	std::cout << result;

	return 0;
}
