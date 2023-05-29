//BaekJoon_2293
//동전 1

/*
* 제한 시간 : 0ms / 0.5s
* 메모리 제한 : 2060KB / 4MB
* 정답 비율 : 45.956%
*/

#include<iostream>

using namespace std;

int dp[10010];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	int coin[101];

	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		cin >> coin[i];
	}

	dp[0] = 1;

	for (int i = 1; i <= n; i++) {
		for (int j = coin[i]; j <= k; j++) {
			dp[j] = dp[j] + dp[j - coin[i]];
		}
	}
	cout << dp[k];
}
