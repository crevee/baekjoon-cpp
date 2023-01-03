//BaekJoon_15963
//CASIO


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 64.445%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	long long n, m;

	std::cin >> n >> m;

	if (n == m) {
		std::cout << "1";
	}
	else {
		std::cout << "0";
	}
}
