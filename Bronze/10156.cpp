//BaekJoon_10156
//과자

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 60.854%
*/

#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int k, n, m;

	std::cin >> k >> n >> m;


	if (k * n > m) {
		std::cout << k * n - m;
	}
	else {
		std::cout << '0';
	}
}
