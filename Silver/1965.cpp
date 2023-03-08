//BaekJoon_1965
//상자넣기


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 49.256%
*/

#include<iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, max = 0;
	int arr[1001], dp[1001];

	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		std::cin >> arr[i];
	}

	for (int i = 1; i <= n; i++) {
		dp[i] = 1;

		for (int j = 1; j < i; j++) {
			if (arr[j] < arr[i] && dp[i] < dp[j] + 1) {
				dp[i] = dp[j] + 1;
			}
		}
		if (max < dp[i]) {
			max = dp[i];
		}
	}
	std::cout << max;
}
