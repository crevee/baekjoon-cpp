//BaekJoon_2566
//최댓값

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 45.185%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int arr[9][9]{};
	int max = 0, max_i = 0, max_j = 0;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			std::cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (max <= arr[i][j]) {
				max = arr[i][j];
				max_i = i;
				max_j = j;
			}
		}
	}
	
	std::cout << max << '\n' << max_i + 1 << " " << max_j + 1;
}
