//BaekJoon_1495
//기타리스트


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2072KB / 128MB
* 정답 비율 : 36.519%
*/

#include<iostream>

int v[51];
bool dp[51][1001];

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, s, m;

	std::cin >> n >> s >> m;

	for (int i = 1; i <= n; i++) {
		std::cin >> v[i];
	}

	if (s + v[1] <= m) {
		dp[1][s + v[1]] = true;
	}
	if (s - v[1] >= 0) {
		dp[1][s - v[1]] = true;
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			if (dp[i - 1][j] == true) {
				if (j + v[i] <= m) {
					dp[i][j + v[i]] = true;
				}
				if (j - v[i] >= 0) {
					dp[i][j - v[i]] = true;
				}
			}
		}
	}

	for (int i = m; i >= 0; i--) {
		if (dp[n][i] == true) {
			std::cout << i;
			return 0;
		}
	}
	std::cout << -1;
}
