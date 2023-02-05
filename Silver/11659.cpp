//BaekJoon_11659
//구간 합 구하기 4


/*
* 제한 시간 : 40ms / 1s
* 메모리 제한 : 2412KB / 256MB
* 정답 비율 : 40.892%
*/

#include <iostream>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int n, m;
	int* a;

	std::cin >> n >> m;

	a = new int[n];

	a[0] = 0;

	for (int i = 1; i <= n; i++) {
		int temp;

		std::cin >> temp;

		a[i] = a[i - 1] + temp;
	}

	for (int k = 0; k < m; k++) {
		int i, j;
		
		std::cin >> i >> j;

		std::cout << a[j] - a[i - 1] << '\n';
	}
}
