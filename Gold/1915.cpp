//BaekJoon_1915
//가장 큰 정사각형

/*
* 제한 시간 : 12ms / 1s
* 메모리 제한 : 5940KB / 128MB
* 정답 비율 : 29.705%
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int dp[1001][1001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, result = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		string s;

		cin >> s;

		for (int j = 0; j < m; j++) {
			dp[i][j] = s[j] - '0';

			if (dp[i][j] == 1 && i > 0 && j > 0) {
				dp[i][j] = 
					min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) 
					+ dp[i][j];
			}
			if (result < dp[i][j]) {
				result = dp[i][j];
			}
		}
	}
	cout << result * result;

	return 0;
}
