//BaekJoon_1309
//동물원

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2412KB / 128MB
* 정답 비율 : 47.324%
*/

#include <iostream>

using namespace std;

int dp[100001] = { 1,3 };

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	for (int i = 2; i <= n; i++) {
		dp[i] = (dp[i - 1] * 2 + dp[i - 2]) % 9901;
	}

	cout << dp[n];

	return 0;
}
