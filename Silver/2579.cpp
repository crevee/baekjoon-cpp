//BaekJoon_2579
//계단 오르기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 33.821%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	int* arr;
	int* dp;

	std::cin >> n;

	arr = new int[n];
	dp = new int[n];


	for (int i = 1; i <= n; i++) {
		std::cin >> arr[i];
	}

	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];
	dp[3] = std::max(arr[1] + arr[3], arr[2] + arr[3]);

	for (int i = 4; i <= n; i++) {
		dp[i] = std::max(dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i]);
	}

	std::cout << dp[n];

	return 0;
}
