//BaekJoon_11057
//오르막 수

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2060KB / 256MB
* 정답 비율 : 47.755%
*/

#include<iostream>

using namespace std;

int dp[1001][10]{};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	for (int i = 0; i < 10; i++) {
		dp[1][i] = 1;
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 0) {
				dp[i][0] = 1;
				continue;
			}

			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
			dp[i][j] %= 10007;
		}
	}

	int result = 0;

	for (int i = 0; i < 10; i++) {
		result = (result + dp[n][i]);
	}
	cout << result % 10007;
}
