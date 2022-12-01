//BaekJoon_2225
//합분해

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2336KB / 128MB
* 정답 비율 : 42.702%
*/

#include <iostream>

long d[201][201];

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, k;

	std::cin >> n >> k;

	for (int i = 0; i <= k; i++) {
		d[1][i] = i;
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			d[i][j] = (d[i - 1][j] + d[i][j - 1]) % 1000000000;
		}
	}
	
	std::cout << d[n][k] << "\n";

	return 0;
}
