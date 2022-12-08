//BaekJoon_1075
//나누기

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 56.111%
*/

#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, f;

	std::cin >> n >> f;

	n = (n / 100) * 100;

	while (n % f != 0) {
		n++;
	}

	if (n % 100 < 10) {
		std::cout << '0' << n % 100;
	}
	else {
		std::cout << n % 100;
	}
}
