//BaekJoon_15988
//1, 2, 3 더하기 3

/*
* 제한 시간 : 500ms / 1s
* 메모리 제한 : 9832KB / 512MB
* 정답 비율 : 34.846%
*/

#include<iostream>

long long dp[1000001];

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int t, n;

	std::cin >> t;

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	for (int i = 0; i < t; i++) {
		std::cin >> n;

		for (int i = 4; i <= n; i++) {
			dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % 1000000009;
		}
		std::cout << dp[n] % 1000000009 << '\n';
	}
}
