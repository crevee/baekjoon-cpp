//BaekJoon_1024
//수열의 합


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 27.199%
*/

#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, l;
	int t, x = -1, iter = -1;

	std::cin >> n >> l;

	for (int i = l; i <= 100; i++) {
		t = (i - 1) * i / 2;

		if ((n - t) % i == 0 && (n - t) / i >= 0) {
			x = (n - t) / i;
			iter = i;
			break;
		}
	}

	if (x == -1) {
		std::cout << -1;
	}
	else {
		for (int i = 0; i < iter; i++) {
			std::cout << x + i << ' ';
		}
	}

	return 0;
}
