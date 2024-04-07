//BaekJoon_1947
//선물 전달

/*
* 제한 시간 : 8ms / 2s
* 메모리 제한 : 9832KB / 128MB
* 정답 비율 : 49.661%
*/

#include <iostream>

using namespace std;

long long dp[1000001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	cin >> n;

	dp[1] = 0;
	dp[2] = 1;

	for (int i = 3; i <= n; i++) {
		dp[i] = (i - 1) * (dp[i - 1] + dp[i - 2]) % 1000000000;
	}
	cout << dp[n];

	return 0;
}
