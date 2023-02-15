//BaekJoon_9372
//상근이의 여행

/*
* 제한 시간 : 20ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 60.445%
*/

#include<iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int t, n, m, a, b;

	std::cin >> t;

	for (int i = 0; i < t; i++) {
		std::cin >> n >> m;

		for (int j = 0; j < m; j++) {
			std::cin >> a >> b;
		}
		std::cout << n - 1 << '\n';
	}
}
