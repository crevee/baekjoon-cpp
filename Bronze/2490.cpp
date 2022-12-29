//BaekJoon_2490
//윷놀이

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 57.258%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);
	
	for (int i = 0; i < 3; i++) {
		int a, b, c, d;

		std::cin >> a >> b >> c >> d;

		int sum = a + b + c + d;

		if (sum == 0) {
			std::cout << 'D' << '\n';
		}
		else if (sum == 1) {
			std::cout << 'C' << '\n';
		}
		else if (sum == 2) {
			std::cout << 'B' << '\n';
		}
		else if (sum == 3) {
			std::cout << 'A' << '\n';
		}
		else if(sum == 4) {
			std::cout << 'E' << '\n';
		}
	}
}
