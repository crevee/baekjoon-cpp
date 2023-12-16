//BaekJoon_13398
//연속합 2

/*
* 제한 시간 : 8ms / 2s
* 메모리 제한 : 3198KB / 512MB
* 정답 비율 : 29.732%
*/

#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

array<array<int, 2>, 100000> dp;
array<int, 100000> a;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, result = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	dp[0][0] = a[0];
	dp[0][1] = a[0];

	result = a[0];

	for (int i = 1; i < n; i++) {
		dp[i][0] = max(dp[i - 1][0] + a[i], a[i]);
		dp[i][1] = max(dp[i - 1][0], dp[i - 1][1] + a[i]);
		result = max(result, max(dp[i][0], dp[i][1]));
	}

	cout << result;
}
