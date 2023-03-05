//BaekJoon_1783
//병든 나이트


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 43.136%
*/

#include<iostream>

int Min(int a, int b) {
	return a > b ? b : a;
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, m;

	std::cin >> n >> m;

	if (n == 1) {
		std::cout << 1;
	}
	else if (n == 2) {
		std::cout << Min(4, (m + 1) / 2);
	}
	else if (n >= 3) {
		if (m <= 6) {
			std::cout << Min(4, m);
		}
		else {
			std::cout << m - 2;
		}
	}
}
