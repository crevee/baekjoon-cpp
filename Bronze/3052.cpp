//BaekJoon_3052
//나머지

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 58.208%
*/

#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, count = 0;
	int arr[42]{ 0 };

	for (int i = 0; i < 10; i++)
	{
		std::cin >> n;
		arr[n % 42]++;
	}

	for (int j = 0; j < 42; j++)
	{
		if (arr[j] > 0)
		{
			count++;
		}
	}

	std::cout << count;

	return 0;
}
