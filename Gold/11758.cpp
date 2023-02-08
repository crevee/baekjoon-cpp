//BaekJoon_11758
//CCW

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 62.187%
*/

#include<iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int x1, y1, x2, y2, x3, y3;

	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	if ((x1 * y2 - x2 * y1 + x2 * y3 - x3 * y2 + x3 * y1 - x1 * y3) / 2 > 0) {
		std::cout << '1';
	}
	else if ((x1 * y2 - x2 * y1 + x2 * y3 - x3 * y2 + x3 * y1 - x1 * y3) / 2 < 0) {
		std::cout << "-1";
	}
	else {
		std::cout << '0';
	}
}
