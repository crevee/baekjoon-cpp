//BaekJoon_2342
//Dacne Dance Revolution

/*
* 제한 시간 : 24ms / 2s
* 메모리 제한 : 11788KB / 128MB
* 정답 비율 : 38.366%
*/

#include <iostream>
#include <algorithm>

using namespace std;

int dp[100001][5][5];

int min_power[5][5] = { {0, 2, 2, 2, 2},
	{2, 1, 3, 4, 3},
	{2, 3, 1, 3, 4},
	{2, 4, 3, 1, 3},
	{2, 3, 4, 3, 1} };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, s = 1;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			for (int k = 0; k < 100001; k++) {
				dp[k][i][j] = 1987654321;
			}
		}
	}

	dp[0][0][0] = 0;

	while (true) {
		cin >> n;

		if (n == 0) {
			break;
		}

		for (int i = 0; i < 5; i++) {
			if (n == i) {
				continue;
			}
			for (int j = 0; j < 5; j++) {
				dp[s][i][n] = min(dp[s - 1][i][j] + min_power[j][n], dp[s][i][n]);
			}
		}

		for (int i = 0; i < 5; i++) {
			if (n == i) {
				continue;
			}
			for (int j = 0; j < 5; j++) {
				dp[s][n][i] = min(dp[s - 1][j][i] + min_power[j][n], dp[s][n][i]);
			}
		}
		s++;
	}
	s--;

	int result = 1987654321;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			result = min(result, dp[s][i][j]);
		}
	}
	cout << result << '\n';
}
