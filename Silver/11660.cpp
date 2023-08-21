//BaekJoon_11660
//구간 합 구하기 5

/*
* 제한 시간 : 128ms / 1s
* 메모리 제한 : 10228KB / 256MB
* 정답 비율 : 44.529%
*/

#include<iostream>

using namespace std;

int a[1025][1025], dp[1025][1025];

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	int x_1, x_2, y_1, y_2, answer;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + a[i][j];
		}
	}

	for (int i = 0; i < m; i++) {
		cin >> x_1 >> y_1;
		cin >> x_2 >> y_2;

		answer = dp[x_2][y_2] - dp[x_1 - 1][y_2] - dp[x_2][y_1 -1]
			+ dp[x_1 - 1][y_1- 1];

		cout << answer << '\n';
	}
}
