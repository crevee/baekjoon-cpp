//BaekJoon_2491
//수열


/*
* 제한 시간 : 4ms / 1s
* 메모리 제한 : 2412KB / 128MB
* 정답 비율 : 52.516%
*/

#include <iostream>

int Max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int n, length = 1, max_value = 1;
	int* a;

	std::cin >> n;

	a = new int [n];

	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}

	for (int i = 1; i < n; i++) {
		if (a[i] >= a[i - 1]) {
			length++;
		}
		else {
			length = 1;
		}
		max_value = Max(max_value, length);
	}

	length = 1;

	for (int i = 1; i < n; i++) {
		if (a[i] <= a[i - 1]) {
			length++;
		}
		else {
			length = 1;
		}
		max_value = Max(max_value, length);
	}
	std::cout << max_value;
}
