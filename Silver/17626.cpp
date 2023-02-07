//BaekJoon_17626
//Four Squares


/*
* 제한 시간 : 12ms / 0.5s
* 메모리 제한 : 3972KB / 512MB
* 정답 비율 : 44.701%
*/

#include <iostream>

int n;
int dp[500001];

int Min(int a, int b) {
	return a > b ? b : a;
}

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::cin >> n;

	dp[1] = 1;

	for (int i = 1; i <= n; i++) {
		dp[i] = dp[1] + dp[i - 1];

		for (int j = 2; j * j <= i; j++) {
			dp[i] = Min(dp[i], 1 + dp[i - j * j]);
		}
	}
	std::cout << dp[n];
}
