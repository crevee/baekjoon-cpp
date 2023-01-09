//BaekJoon_9465
//스티커

/*
* 제한 시간 : 84ms / 1s
* 메모리 제한 : 5144KB / 256MB
* 정답 비율 : 46.975%
*/

#include <iostream>
#include <algorithm>

long long arr[2][100001]{};
long long dp[2][100001]{};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int t, n;

	std::cin >> t;

	for (int i = 0; i < t; i++) {
		std::cin >> n;

		for (int j = 0; j < 2; j++) {
			for (int k = 1; k < n + 1; k++) {
				std::cin >> arr[j][k];
			}
		}

		dp[0][0] = 0;
		dp[1][0] = 0;
		dp[0][1] = arr[0][1];
		dp[1][1] = arr[1][1];

		for (int k = 2; k < n + 1; k++) {
			dp[0][k] = std::max(dp[1][k - 2], dp[1][k - 1]) + arr[0][k];
			dp[1][k] = std::max(dp[0][k - 2], dp[0][k - 1]) + arr[1][k];
		}

		std::cout << std::max(dp[0][n], dp[1][n]) << '\n';
	}
}
