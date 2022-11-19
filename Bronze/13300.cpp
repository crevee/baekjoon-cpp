//BaekJoon_13300
//방 배정

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 60.082%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, k;
	int arr[2][7]{};

	std::cin >> n >> k;

	int result = 0;

	for (int i = 0; i < n; i++) {
		int s, y;

		std::cin >> s >> y;

		arr[s][y]++;
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 1; j < 7; j++) {
			if (arr[i][j] != 0) {
				result += arr[i][j] / k;

				if (arr[i][j] % k != 0) {
					result++;
				}
			}
		}
	}
	std::cout << result;

	return 0;
}
