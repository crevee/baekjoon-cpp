//BaekJoon_16194
//카드 구매하기 2

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2028KB / 256MB
* 정답 비율 : 75.615%
*/

#include <iostream>

using namespace std;

int p[1001];
int dp[1001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> p[i];
	}

	for (int i = 1; i <= n; i++) {
		dp[i] = p[i];

		for (int j = 1; j <= i; j++) {
			dp[i] = min(dp[i], dp[i - j] + dp[j]);
		}
	}

	cout << dp[n];

	return 0;
}
