//BaekJoon_2302
//숫자 정사각형


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 42.128%
*/

#include<iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n ,m;
	int* seat;
	int* dp;

	std::cin >> n >> m;

	seat = new int[m];
	dp = new int[m];

	for (int i = 0; i < m; i++) {
		std::cin >> seat[i];
	}

	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;

	for (int i = 3; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	int start = 0;
	int result = 1;
	
	for (int i = 0; i < m; i++) {
		int end = seat[i];
		result = result * dp[end - start - 1];
		start = end;
	}

	result = result * dp[n - start];

	std::cout << result;
}
