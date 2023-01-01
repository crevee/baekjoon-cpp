//BaekJoon_15873
//공백 없는 A+B

/*
* 제한 시간 : 0ms / 0.5s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 50.177%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int a, b;

	std::cin >> a;

	if (a == 1010) {
		std::cout << 20;
	}
	else if (a % 10 == 0) {
		a /= 100;
		std::cout << 10 + a;
	}
	else {
		b = a % 10;
		a /= 10;

		if (a == 10) {
			std::cout << 10 + b;
		}
		else {
			std::cout << a + b;
		}
	}
}
