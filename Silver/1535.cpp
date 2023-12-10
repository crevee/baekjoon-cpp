//BaekJoon_1535
//안녕

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 54.871%
*/

#include <iostream>

using namespace std;

int dp[101];

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	pair<int, int> p[20];

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> p[i].first;
	}
	for (int i = 0; i < n; i++) {
		cin >> p[i].second;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 100; j >= p[i].first; j--) {
			dp[j] = max(dp[j], dp[j - p[i].first] + p[i].second);
		}
	}
	cout << dp[99];

	return 0;
}
