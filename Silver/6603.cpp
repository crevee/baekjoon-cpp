//BaekJoon_6603
//로또


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 55.185%
*/

#include <iostream>

int k;
int S[13]{};
int lotto[6]{};

void GetLotto(int start, int depth) {
	if (depth == 6) {
		for (int i = 0; i < 6; i++) {
			std::cout << lotto[i] << " ";
		}
		std::cout << "\n";
		return;
	}
	for (int i = start; i < k; i++) {
		lotto[depth] = S[i];

		GetLotto(i + 1, depth + 1);
	}
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	while (1) {
	std::cin >> k;

		if (k == 0) {
			break;
		}

		for (int i = 0; i < k; i++) {
			std::cin >> S[i];
		}
		GetLotto(0, 0);
		std::cout << "\n";
	}
}
