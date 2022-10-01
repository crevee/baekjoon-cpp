//BaekJoon_11653
//소인수분해

/*
* 제한 시간 : 32ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 52.221%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;

	std::cin >> n;

	while (n != 1) {
		for (int i = 2; i <= n; i++) {
			if (n % i == 0){
				std::cout << i << '\n';
				n = n / i;
				break;
			}
		}
	}

	return 0;
}
