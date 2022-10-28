//BaekJoon_2740
//행렬 곱셈

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2136KB / 128MB
* 정답 비율 : 69.477%
*/

#include <iostream>

int a[100][100];
int b[100][100];
int result[100][100];

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, m, k;

	std::cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cin >> a[i][j];
		}
	}

	std::cin >> m >> k;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			std::cin >> b[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			for (int k = 0; k < m; k++) {
				result[i][j] += a[i][k] * b[k][j];
			}
			std::cout << result[i][j] << " ";
		}
		std::cout << '\n';
	}

	return 0;
}
