//BaekJoon_2294
//동전 2

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2060KB / 128MB
* 정답 비율 : 29.244%
*/

#include <iostream>

int n, k;
int coin[101]{}, dp[10001];

int Min(int a, int b) {
	return a < b ? a : b;
}

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::cin >> n >> k;

	for (int i = 1; i <= k; i++) {
		dp[i] = 10001;
	}

	for (int i = 1; i <= n; i++) {
		std::cin >> coin[i];

		for (int j = coin[i]; j <= k; j++) {
			dp[j] = Min(dp[j], dp[j - coin[i]] + 1);
		}
	}

	if (dp[k] == 10001) {
		std::cout << -1;
	}
	else {
		std::cout << dp[k];
	}
}
