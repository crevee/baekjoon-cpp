//BaekJoon_1011
//Fly me to the Alpha Centauri

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 30.849%
*/

#include <iostream>
#include <cmath>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int t;

	std::cin >> t;

	for (int i = 0; i < t; i++) {

		long long x, y;
		long long result, max = 0;

		std::cin >> x >> y;
		
		while (max * max <= y - x) {
			max++;
		}

		max--;

		result = 2 * max - 1;

		long long distance = y - x - max * max;

		distance = (long long)ceil((double)distance / (double)max);
		result += distance;

		std::cout << result << '\n';
	}
	return 0;
}
