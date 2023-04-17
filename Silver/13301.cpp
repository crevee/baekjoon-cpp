//BaekJoon_13301
//타일 장식물


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 50.425%
*/

#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	long long dp[81];

	cin >> n;

	dp[1] = 4;
	dp[2] = 6;
	dp[3] = 10;

	for (int i = 4; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	cout << dp[n];
}
