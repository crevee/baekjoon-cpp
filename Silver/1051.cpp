//BaekJoon_1051
//숫자 정사각형


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2036KB / 128MB
* 정답 비율 : 42.128%
*/

#include <iostream>
#include <string>

int n, m, arr[50][50];

int Min(int a, int b) {
	return a > b ? b : a;
}

int Max(int a, int b) {
	return a > b ? a : b;
}

int SquareSize() {
	int result = 1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 1; k < Min(n, m); k++) {
				if (i + k < n && j + k < m && arr[i + k][j] == arr[i][j]
					&& arr[i + k][j + k] == arr[i][j] && arr[i][j + k] == arr[i][j]) {
					result = Max(result, k + 1);
				}
			}
		}
	}
	return result * result;
}

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::cin >> n >> m;

	for (int i = 0; i < n; i++) {
		std::string temp;

		std::cin >> temp;

		for (int j = 0; j < m; j++) {
			arr[i][j] = temp[j] - '0';
		}
	}
	std::cout << SquareSize();
}
