//BaekJoon_9251
//LCS

/*
* 제한 시간 : 4ms / 0.1s
* 메모리 제한 : 5940KB / 256MB
* 정답 비율 : 40.192%
*/

#include <iostream>
#include <string>
#include <algorithm>

int dp[1001][1001];

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);
	
	std::string a, b;

	std::cin >> a >> b;

	for (int i = 1; i <= a.length(); i++) {
		for (int j = 1; j <= b.length(); j++) {
			if (a[i - 1] == b[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			else {
				dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}

	std::cout << dp[a.length()][b.length()];
}
