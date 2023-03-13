//BaekJoon_11052
//카드 구매하기


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 61.066%
*/

#include<iostream>

int Max(int a, int b) {
	return a > b ? a : b;
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	int* p, *dp;

	std::cin >> n;

	p = new int[n + 1];
	dp = new int[n + 1];

	for (int i = 1; i <= n; i++) {
		std::cin >> p[i];
	}

	dp[0] = p[0] = 0;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i] = Max(dp[i], dp[i - j] + p[j]);
		}
	}
	std::cout << dp[n];
}
