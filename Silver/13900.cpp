//BaekJoon_13900
//순서쌍의 곱의 합


/*
* 제한 시간 : 12ms / 1s
* 메모리 제한 : 4200KB / 256MB
* 정답 비율 : 33.854%
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	long long result = 0;

	vector <int> v;
	vector <long long> dp;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int tmp;

		cin >> tmp;

		v.emplace_back(tmp);
	}

	dp.emplace_back(v[0]);

	for (int i = 1; i < n; i++) {
		dp.emplace_back(dp[i - 1] + v[i]);
	}

	for (int i = 0; i < n - 1; i++) {
		result += v[i] * (dp[n - 1] - dp[i]);
	}

	cout << result;

	return 0;
}
