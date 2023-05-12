//BaekJoon_11055
//가장 큰 증가하는 부분 수열

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 44.685%
*/

#include<iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int a[1001];
	int dp[1001];

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	int result = 0;

	for (int i = 0; i <= n; i++) {
		dp[i] = a[i];

		for (int j = 1; j < i; j++) {
			if (a[j] < a[i] && dp[i] < dp[j] + a[i]) {
				dp[i] = dp[j] + a[i];
			}
		}
		if (result < dp[i]) {
			result = dp[i];
		}
	}
	cout << result;
}
