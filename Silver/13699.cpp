//BaekJoon_13699
//점화식


/*
* 제한 시간 : 0ms / 5s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 74.167%
*/

#include<iostream>

int n;
long long dp[36];

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::cin >> n;

	dp[0] = 1;

	for (int i = 1; i <= n; i++) {
		for (int k = 1; k <= i; k++) {
			dp[i] += dp[k - 1] * dp[i - k];
		}
	}
	std::cout << dp[n];
}
