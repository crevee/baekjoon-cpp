//BaekJoon_20492
//세금

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 1024MB
* 정답 비율 : 64.463%
*/

#include <iostream>

int main() {

	int N = 0;

	std::cin >> N;

	int a = N * 0.78;
	int b = N - 0.2 * 0.22 * N;


	std::cout << a << " " << b;

	return 0;
}
