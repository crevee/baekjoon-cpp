//BaekJoon_17496
//스타후르츠
/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 70.015%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n = 0, t = 0, c = 0, p = 0;

	std::cin >> n >> t >> c >> p;
	std::cout << (n - 1) / t * c * p;

	return 0;

}
