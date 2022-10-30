//BaekJoon_4796
//캠핑

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 39.366%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int l, p, v, i = 0, result = 0;

	while (true) {
		std::cin >> l >> p >> v;

		if (l == 0 && p == 0 && v == 0) {
			break;
		}
		result = std::min(v % p, l) + (v / p) * l;

		std::cout << "Case " << ++i << ": " << result << '\n';
	}

	return 0;
}
