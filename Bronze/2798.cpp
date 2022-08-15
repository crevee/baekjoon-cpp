//BaekJoon_2798
//블랙잭

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 46.854%
*/

#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, m, sum = 0, result = 0;
	int* arr;

	std::cin >> n >> m;

	arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				sum = arr[i] + arr[j] + arr[k];
				
				if (sum > result && sum <= m)
				{
					result = sum;
					sum = 0;
				}
			}
		}
	}

	std::cout << result;

	return 0;
}
