//BaekJoon_2193
//이친수


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 40.209%
*/

#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	long long dp[91];

	std::cin >> n;

	dp[1] = 1;
	dp[2] = 1;

	for (int i = 3; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	std::cout << dp[n];
}
