//BaekJoon_2096
//내려가기

/*
* 제한 시간 : 24ms / 1s
* 메모리 제한 : 2020KB / 4MB
* 정답 비율 : 36.599%
*/

#include <iostream>
#include <algorithm>

using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, temp_0, temp_2;
	int max_dp[3]{ 0,0,0 }, min_dp[3]{ 0,0,0 }, a[3];

	cin >> n;
	cin >> max_dp[0] >> max_dp[1] >> max_dp[2];

	min_dp[0] = max_dp[0], min_dp[1] = max_dp[1], min_dp[2] = max_dp[2];

	for (int i = 1; i < n; i++) {
		cin >> a[0] >> a[1] >> a[2];

		temp_0 = max_dp[0]; temp_2 = max_dp[2];

		max_dp[0] = max(max_dp[0], max_dp[1]) + a[0];
		max_dp[2] = max(max_dp[1], max_dp[2]) + a[2];
		max_dp[1] = max(max(temp_0, max_dp[1]), temp_2) + a[1];

		temp_0 = min_dp[0], temp_2 = min_dp[2];

		min_dp[0] = min(min_dp[0], min_dp[1]) + a[0];
		min_dp[2] = min(min_dp[1], min_dp[2]) + a[2];
		min_dp[1] = min(min(temp_0, min_dp[1]), temp_2) + a[1];
	}
	cout << max(max(max_dp[0], max_dp[1]), max_dp[2]) << ' ';
	cout << min(min(min_dp[0], min_dp[1]), min_dp[2]);

	return 0;
}
