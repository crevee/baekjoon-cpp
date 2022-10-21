//BaekJoon_12865
//평범한 배낭

/*
* 제한 시간 : 32ms / 2s
* 메모리 제한 : 41476KB / 512MB
* 정답 비율 : 35.310%
*/

#include <iostream>

int dp[101][100001];

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	
	int n, k;

	std::cin >> n >> k;

	int* w = new int [n];
	int* v = new int [n];
	

	for (int i = 1; i <= n; i++) {
		std::cin >> w[i] >> v[i];
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			if (j - w[i] >= 0) {
				dp[i][j] = std::max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
			}
			else {
				dp[i][j] = dp[i - 1][j];
			}
		}
	}

	std::cout << dp[n][k];

	return 0;
}
