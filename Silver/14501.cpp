//BaekJoon_14501
//퇴사


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 49.430%
*/

#include<iostream>

using namespace std;

int t[15], p[15], dp[15];

int Max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> t[i] >> p[i];
	}

	for (int i = n; i > 0; i--) {
		if (i + t[i] > n + 1) {
			dp[i] = dp[i + 1];
		}
		else {
			dp[i] = Max(dp[i + 1], dp[i + t[i]] + p[i]);
		}
	}
	cout << dp[1] << "\n";
}
