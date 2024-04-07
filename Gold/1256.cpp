//BaekJoon_1256
//사전

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2180KB / 128MB
* 정답 비율 : 31.236%
*/

#include <iostream>

using namespace std;

int dp[201][201];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, k;

	cin >> n >> m >> k;

	for (int i = 0; i <= 200; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i) {
				dp[i][j] = 1;
			}
			else {
				dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];

				if (dp[i][j] > 1000000000) {
					dp[i][j] = 1000000001;
				}
			}
		}
	}

	if (dp[n + m][m] < k) {
		cout << "-1";
	}
	else {
		while (!(n == 0 && m == 0)) {
			if (dp[n - 1 + m][m] >= k) {
				cout << 'a';
				n--;
			}
			else {
				cout << 'z';

				k = k - dp[n - 1 + m][m];
				m--;
			}
		}
	}
	return 0;
}
