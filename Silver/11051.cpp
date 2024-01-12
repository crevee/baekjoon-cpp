//BaekJoon_11051
//이항 계수 2


/*
* 제한 시간 : 4ms / 1s
* 메모리 제한 : 5936KB / 256MB
* 정답 비율 : 37.991%
*/

#include <iostream>

using namespace std;

int dp[1001][1001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;

	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= k; j++) {
			if (j == 0 || i == j) {
				dp[i][j] = 1;
			}
			else {
				dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % 10007;
			}
		}
	}

	cout << dp[n][k];

	return 0;
}
