//BaekJoon_14719
//빗물

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 56.023%
*/

#include<iostream>

int Max(int a, int b) {
	return a > b ? a : b;
}

int Min(int a, int b) {
	return a > b ? b : a;
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int h, w, result = 0;
	int* block;

	std::cin >> h >> w;

	block = new int[h];

	for (int i = 0; i < w; i++) {
		std::cin >> block[i];
	}

	for (int i = 0; i < w - 1; i++) {
		int left = 0, right = 0;

		for (int j = 0; j < i; j++) {
			left = Max(left, block[j]);
		}
		for (int j = w - 1; j > i; j--) {
			right = Max(right, block[j]);
		}
		result += Max(0, Min(left, right) - block[i]);
	}
	std::cout << result;
}
