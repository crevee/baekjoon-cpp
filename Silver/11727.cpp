//BaekJoon_11727
//2xn 타일링 2


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 59.308%
*/

#include <iostream>

int n;
int* dp;

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::cin >> n;

	dp = new int[n];

	dp[0] = 1;
	dp[1] = 3;

	for (int i = 2; i < n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2] * 2) % 10007;
	}
	std::cout << dp[n - 1];
}
