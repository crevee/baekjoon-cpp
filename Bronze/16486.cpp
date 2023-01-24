//BaekJoon_16486
//운동장 한 바퀴


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 78.162%
*/

#include <iostream>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int d_1, d_2;

	std::cin >> d_1 >> d_2;

	std::cout.precision(16);
	std::cout << d_1 * 2 + 3.141592 * d_2 * 2;
}
