//BaekJoon_10871
//X보다 작은 수

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 256MB
* 정답 비율 : 54.637%
*/

#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, x;
	int* arr;

	std::cin >> n >> x;

	arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];

		if (arr[i] < x)
		{
			std::cout << arr[i] << ' ';
		}
	}
	return 0;
}
