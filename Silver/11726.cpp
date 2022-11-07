//BaekJoon_11726
//2xn 타일링

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 23.312%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	int* tile;

	std::cin >> n;

	tile = new int [n];

	tile[1] = 1, tile[2] = 2;

	for (int i = 3; i <= n; i++) {
		tile[i] = tile[i - 1] + tile[i - 2];
		tile[i] %= 10007;
	}

	std::cout << tile[n];

	return 0;
}
