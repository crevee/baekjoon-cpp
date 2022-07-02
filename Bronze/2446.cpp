//BaekJoon_2446
//별 찍기 - 9
/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 58.455%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n = 0;


	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			std::cout << " ";
		}

		for (int k = 0; k < 2 * n - 2 * i - 1; k++)
		{
			std::cout << "*";
		}

		std::cout << "\n";
	}

	for (int i = 1; i <  n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			std::cout << " ";
		}

		for (int k = 0; 2 * i + 1 > k; k++)
		{
			std::cout << "*";
		}

		std::cout << "\n";
	}
	
	return 0;
}
