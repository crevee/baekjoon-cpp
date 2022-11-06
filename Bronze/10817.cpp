//BaekJoon_10817
//세 수

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 48.413%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int a, b, c;

	std::cin >> a >> b >> c;

	if (a >= b && b >= c) {
		std::cout << b;
	}
	else if (a >= c && c >= b) {
		std::cout << c;
	}
	else if (b >= a && a >= c) {
		std::cout << a;
	}
	else if (b >= c && c >= a) {
		std::cout << c;
	}
	else if (c >= a && a >= b) {
		std::cout << a;
	}
	else if (c >= b && b >= a) {
		std::cout << b;
	}

	return 0;
}
