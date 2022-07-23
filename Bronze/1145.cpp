//BaekJoon_1145.cpp
//적어도 대부분의 배수

/*
* 제한 시간 : 16ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 58.799%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int number[5]{ 0 }, result = 1;

	for (int i = 0; i < 5; i++)
	{
		std::cin >> number[i];
	}

	while (1) {
		
		int count = 0;

		for (int i = 0; i < 5; i++)
		{
			if (result % number[i] == 0)
			{
				count++;
			}
		}

		if (count >= 3)
		{
			std::cout << result;
			break;
		}
		result++;
	}

	return 0;

}
