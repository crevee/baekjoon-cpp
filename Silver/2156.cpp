//BaekJoon_2156
//포도주 시식


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2180KB / 128MB
* 정답 비율 : 32.591%
*/

#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	int* arr;
	int* dp;

	std::cin >> n;

	arr = new int[n + 1];
	dp = new int[n + 2];


	for (int i = 1; i <= n; i++) {
		std::cin >> arr[i];
	}

	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];

	for (int i = 3; i <= n; i++) {
		dp[i] = std::max(dp[i - 1], std::max(dp[i - 3] + arr[i - 1] + arr[i], dp[i - 2] + arr[i]));
	}
	
	std::cout << dp[n];
}
