//BaekJoon_2563
//색종이

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 70.755%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	
	int paper[100][100]{};
	int result = 0, x_start, y_start;

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> x_start >> y_start;
		for (int j = x_start; j < x_start + 10; j++) {
			for (int k= y_start; k < y_start + 10; k++) {
				paper[j][k] = true;
			}
		}
	}

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (paper[i][j] == true) {
				result++;
			}
		}
	}

	std::cout << result;
	
	return 0;
}
