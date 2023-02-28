//BaekJoon_1080
//행렬


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 41.397%
*/

#include<iostream>

int n, m, count = 0;
char matrix_a[50][50], matrix_b[50][50];

void Reverse(int x, int y) {
	for (int i = x; i < x + 3; i++) {
		for (int j = y; j < y + 3; j++) {
			if (matrix_a[i][j] == '1') {
				matrix_a[i][j] = '0';
			}
			else {
				matrix_a[i][j] = '1';
			}
		}
	}
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cin >> matrix_a[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cin >> matrix_b[i][j];
		}
	}

	for (int i = 0; i < n - 2; i++) {
		for (int j = 0; j < m - 2; j++) {
			if (matrix_a[i][j] != matrix_b[i][j]) {
				Reverse(i, j);
				count++;
			}
		}
	}

	bool flag = false;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrix_a[i][j] != matrix_b[i][j]) {
				flag = true;
			}
		}
	}

	if (flag) {
		std::cout << -1;
	}
	else {
		std::cout << count;
	}
}
