//BaekJoon_1251
//단어 나누기

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 45.467%
*/

#include <iostream>
#include <string>


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::string input, result = "{";

	std::cin >> input;

	for (int i = 0; i < input.size() - 2; i++)
	{
		for (int j = i + 1; j < input.size() - 1; j++)
		{
			std::string val;

			for (int u = i; u >= 0; u--)
			{
				val += input[u];
			}
			for (int u = j; u > i; u--)
			{
				val += input[u];
			}
			for (int u = input.size() - 1; u > j; u--)
			{
				val += input[u];
			}
			if (result > val)
			{
				result = val;
			}
		}
	}

	std::cout << result;

	return 0;
}
