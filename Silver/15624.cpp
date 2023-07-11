//BaekJoon_15624
//피보나치 수 7


/*
* 제한 시간 : 8ms / 1s
* 메모리 제한 : 5928KB / 512MB
* 정답 비율 : 51.704%
*/

#include <iostream>

using namespace std;

int dp[1000001]{ 0,1 };

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	for (int i = 2; i <= n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007;
	}

	cout << dp[n];

	return 0;
}
