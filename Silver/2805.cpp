//BaekJoon_2805
//나무 자르기

/*
* 제한 시간 : 176ms / 1s
* 메모리 제한 : 5928KB / 256MB
* 정답 비율 : 25.564%
*/

#include <iostream>
#include <algorithm>

int n, m, answer = 0;
int* a;

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);


	std::cin >> n >> m;

	a = new int[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	std::sort(a, a + n);

	int left = 0;
	int right = a[n - 1];

	while (left <= right)
	{
		long long sum = 0;
		int mid = (left + right) / 2;

		for (int i = 0; i < n; i++)
		{
			if ((a[i] - mid) > 0)
			{
				sum += a[i] - mid;
			}
		}
		if (sum < m)
		{
			right = mid - 1;
		}
		else if (sum >= m)
		{
			if (answer < mid)
			{
				answer = mid;
			}

			left = mid + 1;
		}
	}

	std::cout << answer;

	return 0;
}
