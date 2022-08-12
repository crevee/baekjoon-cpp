//BaekJoon_2231
//분해합

/*
* 제한 시간 : 12ms / 2s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 45.418%
*/

#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		int sum = i;
		int part = i;

		while (part)
		{
			sum += part % 10;
			part /= 10;
		}

		if (n == sum)
		{
			std::cout << i;
			
			return 0;
		}
	}

	std::cout << '0';

	return 0;
}
