//BaekJoon_1463
//1로 만들기

/*
* 제한 시간 : 4ms / 0.15s
* 메모리 제한 : 5928KB / 128MB
* 정답 비율 : 32.200%
*/

#include <iostream>

int min(int x, int y)
{
	return (x < y ? x : y);
}

int dp[1000001];

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	dp[1] = 0;
	
	std::cin >> n;

	for (int i = 2; i <= n; i++)
	{
		dp[i] = dp[i - 1] + 1;

		if (i % 2 == 0)
		{
			dp[i] = min(dp[i], dp[i / 2] + 1);
		}
		if (i % 3 == 0)
		{
			dp[i] = min(dp[i], dp[i / 3] + 1);
		}
	}

	std::cout << dp[n];

	return 0;
}
