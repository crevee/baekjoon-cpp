//BaekJoon_11053
//가장 긴 증가하는 부분 수열


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 37.392%
*/

#include <iostream>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	int dp[1000];
	int arr[1000];
	int sum = 0;

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		dp[i] = 1;

		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j]) {
				dp[i] = std::max(dp[i], dp[j] + 1);
			}
		}
		sum = std::max(sum, dp[i]);
	}
	std::cout << sum;
}
