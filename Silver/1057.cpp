//BaekJoon_1057
//토너먼트


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 56.579%
*/

#include <iostream>

int Win(int num) {
	return num % 2 == 0 ? num / 2 : num / 2 + 1;
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	int kim, lim;

	std::cin >> n >> kim >> lim;

	int round = 0;

	while (kim != lim) {
		round++;
		kim = Win(kim);
		lim = Win(lim);
	}

	std::cout << round;
	
	return 0;
}
