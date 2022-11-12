//BaekJoon_1932
//정수 삼각형

/*
* 제한 시간 : 12ms / 2s
* 메모리 제한 : 3980KB / 128MB
* 정답 비율 : 58.925%
*/

#include <iostream>

int arr[501][501];
int dp[501][501]{};

int Max(int a, int b) {
	if (a > b) {
		return a;
	}
	else
	{
		return b;
	}
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;

	std::cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			std::cin >> arr[i][j];
		}
	}

	dp[1][1] = arr[1][1];

	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i][j] = Max(dp[i - 1][j - 1], dp[i - 1][j]) + arr[i][j];
		}
	}

	int max = 0;

	for (int i = 1; i <= n; i++) {
		if (max < dp[n][i]) {
			max = dp[n][i];
		}
	}

	std::cout << max;

	return 0;
}
