//BaekJoon_14652
//사분면 고르기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 61.978%
*/

#include <iostream>

int main() {

	int x = 0, y = 0;

	std::cin >> x >> y;

	if (x > 0) {
		if (y > 0) {
			std::cout << "1";
		}
		else {
			std::cout << "4";
		}
	}
	else {
		if (y > 0) {
			std::cout << "2";

		}
		else {
			std::cout << "3";
		}
	}

	return 0;
}
