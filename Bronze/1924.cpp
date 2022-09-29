//BaekJoon_1924
//2007

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 48.218%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int x, y;

	std::cin >> x >> y;

	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int sumdays = 0;

	sumdays += y;

	for (int i = 0; i < (x - 1); i++) {
		sumdays += month[i];
	}

	switch (sumdays % 7) {
	case 0:
		std::cout << "SUN";
		break;
	case 1:
		std::cout << "MON";
		break;
	case 2:
		std::cout << "TUE";
		break;
	case 3:
		std::cout << "WED";
		break;
	case 4:
		std::cout << "THU";
		break;
	case 5:
		std::cout << "FRI";
		break;
	case 6:
		std::cout << "SAT";
		break;
	}
	
	return 0;
}
