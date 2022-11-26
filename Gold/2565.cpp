//BaekJoon_2565
//전깃줄

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 46.871%
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	int a, b;
	int dp[101]{};

	std::vector <std::pair<int, int>> v;

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> a >> b;
		v.push_back(std::pair<int, int>(a, b));
	}

	std::sort(v.begin(), v.end());

	dp[0] = 1;

	for (int i = 0; i < n; i++) {
		int tmp = 0;

		for (int j = 0; j < i; j++) {
			if (v[j].second < v[i].second && tmp < dp[j]) {
				tmp = dp[j];
			}
		}
		dp[i] = tmp + 1;
	}

	std::sort(dp, dp + n, std::greater<int>());

	std::cout << n - dp[0];

	return 0;
}
