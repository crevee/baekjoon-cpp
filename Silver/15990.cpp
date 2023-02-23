//BaekJoon_15990
//개미


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 3584KB / 512MB
* 정답 비율 : 31.003%
*/

#include<iostream>

int dp[100001][4];

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int t,n;

	dp[1][1] = dp[2][2] = 1;
	dp[3][1] = dp[3][2] = dp[3][3] = 1;

	for (int i = 4; i <= 100001; i++) {
		dp[i][1] = (dp[i - 1][2] + dp[i - 1][3]) % 1000000009;
		dp[i][2] = (dp[i - 2][1] + dp[i - 2][3]) % 1000000009;
		dp[i][3] = (dp[i - 3][1] + dp[i - 3][2]) % 1000000009;
	}

	std::cin >> t;

	for (int i = 0; i < t; i++) {
		std::cin >> n;
		std::cout << ((long long)dp[n][1] + dp[n][2] + dp[n][3]) % 1000000009 << '\n';
	}
}
