//BaekJoon_2447
//별 직기 - 10

/*
* 제한 시간 : 244ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 53.654%
*/

#include <iostream>

void Star(int i, int j, int n) {
	std::cout.tie(0);

	if (i / n % 3 == 1 && j / n % 3 == 1) {
		std::cout << " ";
	}
	else if (n / 3 == 0) {
		std::cout << "*";
	}
	else {
		Star(i, j, n / 3);
	}
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			Star(i, j, n);
		}
		std::cout << '\n';
	}
	
	return 0;
}
