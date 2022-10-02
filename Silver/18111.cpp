//BaekJoon_18111
//막대기

/*
* 제한 시간 : 32ms / 1s
* 메모리 제한 : 2020KB / 1024MB
* 정답 비율 : 24.688%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, m, b, x;
	int blocks[256 + 1]{};
	int answer[2]{};

	std::cin >> n >> m >> b;

	int block_sum = 0;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++) {
			std::cin >> x;
			block_sum += x;

			for (int k = 1; k <= x; k++) {
				blocks[k]++;
			}
		}
	}

	answer[0] = 6.4*1e7;

	for (int i = 0; i <= 256; i++){
		
		int time = 0;
		int height = i;
		int inventory = b;

		for (int j = 1; j <= i; j++) {
			inventory -= n * m - blocks[j];
			time += n * m - blocks[j];
		}

		for (int j = i + 1; j <= 256; j++) {
			inventory += blocks[j];
			time += blocks[j] * 2;
		}

		if (inventory < 0) {
			break;
		}
		if (answer[0] >= time) {
			answer[0] = time;
			answer[1] = height;
		}
	}

	std::cout << answer[0] << ' ' << answer[1] << '\n';

	return 0;
}
