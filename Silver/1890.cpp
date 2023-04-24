//BaekJoon_1890
//점프


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2136KB / 128MB
* 정답 비율 : 29.909%
*/

#include<iostream>

using namespace std;

int n;
int map[100][100];
long long dp[100][100];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
		}
	}
	dp[0][0] = 1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (dp[i][j] == 0 || (i == n - 1 && j == n - 1)) {
				continue;
			}

			int value = map[i][j];
			int down = value + i;
			int right = value + j;

			if (down < n) {
				dp[down][j] = dp[down][j] + dp[i][j];
			}
			if (right < n) {
				dp[i][right] = dp[i][right] + dp[i][j];
			}
		}
	}
	cout << dp[n - 1][n - 1];
}
