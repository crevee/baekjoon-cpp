//BaekJoon_4948
//베르트랑 공준


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 38.210%
*/

#include <iostream>

bool Prime_number[123456 * 2 + 1];

void FindPrime() {
	Prime_number[1] = true;

	for (int i = 2; i < 246913; i++) {
		if (!Prime_number[i]) {
			for (int j = i * 2; j < 246913; j += i) {
				Prime_number[j] = true;
			}
		}
	}
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	FindPrime();

	int n;

	std::cin >> n;

	while (n != 0) {
		int cnt = 0;

		for (int i = n + 1; i <= n * 2; i++) {
			if (!Prime_number[i]) {
				cnt++;
			}
		}

		std::cout << cnt << "\n";
		std::cin >> n;
	}
		return 0;
}
