//BaekJoon_1904
//01타일


/*
* 제한 시간 : 8ms / 0.75s
* 메모리 제한 : 9832KB / 256MB
* 정답 비율 : 31.718%
*/

#include<iostream>

using namespace std;

long long dp[1000001];
int n;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	dp[1] = 1;
	dp[2] = 2;

	for (int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 2] + dp[i - 1]) % 15746;
	}
	cout << dp[n];
}
