//BaekJoon_8958
//OX퀴즈

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 49.832%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int t;
	std::string result;

	std::cin >> t;

	for (int i = 0; i < t; i++)
	{
		std::cin >> result;
		int score = 0, p = 1;

		for (int j = 0; j < result.length(); j++)
		{
			if (result[j] == 'O')
			{
				if (j >= 1 && result[j - 1] == 'O')
				{
					p++;
				}
				else
				{
					p = 1;
				}
				score += p;
			}
		}
		std::cout << score << std::endl;
	}
	return 0;
}
