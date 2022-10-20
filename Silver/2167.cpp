//BaekJoon_2167
//2차원 배열의 합

/*
* 제한 시간 : 400ms / 2s
* 메모리 제한 : 2372KB / 128MB
* 정답 비율 : 57.596%
*/

#include <iostream>

int arr[300][300];

void ArraySum(int x_start, int y_start, int x_end, int y_end) {
	
	std::cout.tie(0);

	int result = 0;

	for (int i = x_start - 1; i < x_end; i++) {
		for (int j = y_start - 1; j < y_end; j++) {
			result += arr[i][j];
		}
	}

	std::cout << result << '\n';
}


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	
	int n, m, k, i, j, x, y;


	std::cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cin >> arr[i][j];
		}
	}

	std::cin >> k;

	for (int q = 0; q < k; q++) {
		std::cin >> i >> j >> x >> y;
		ArraySum(i, j, x, y);
	}

	return 0;
}
