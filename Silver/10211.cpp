//BaekJoon_10211
//Maximum Subarray


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 42.966%
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, n;
	int dp[1010];
	int a[1010];

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;

		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}

		int result = -9876654321;

		for (int i = 1; i <= n; i++) {
			dp[i] = max(0, dp[i - 1]) + a[i];
			result = max(result, dp[i]);
		}
		cout << result << '\n';
	}
	return 0;
}
