//BaekJoon_11060
//점프 점프


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 256MB
* 정답 비율 : 35.657%
*/

#include<iostream>

int dp[1100];

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;

	std::cin >> n;

	dp[1] = 1;

	for (int i = 1; i <= n; i++) {
		int a;
		std::cin >> a;

		if (dp[i] == 0) {
			break;
		}
		for (int j = 1; j <= a; j++) {
			if (i + j > 1000) {
				break;
			}
			if (dp[i + j] > dp[i] + 1 || dp[i + j] == 0) {
				dp[i + j] = dp[i] + 1;
			}
		}
	}

	if (dp[n] == 0) {
		std::cout << -1;
	}
	else {
		std::cout << dp[n] - 1;
	}
}
