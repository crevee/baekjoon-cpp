//BaekJoon_1003
//피보나치 함수

/*
* 제한 시간 : 0ms / 0.25s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 31.724%
*/

#include <iostream>

int fibonacci(int n) {

	int dp[41] = { 0, 1, 1 };

	for (int i = 3; i < 41; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	return dp[n];
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int t;

	std::cin >> t;

	for (int i = 0; i < t; i++) {
		
		int x;
		
		std::cin >> x;

		if (x == 0) {
			std::cout << 1 << ' ' << 0 << '\n';
		}
		else if (x == 1) {
			std::cout << 0 << ' ' << 1 << '\n';
		}
		else {
			std::cout << fibonacci(x - 1) << ' ' << fibonacci(x) << '\n';
		}
	}
	return 0;
}
