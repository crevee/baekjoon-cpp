//BaekJoon_1259
//단어 정렬

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 58.468%
*/

#include <iostream>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::string n;

	while (std::cin >> n)
	{
		if (n == "0")
		{
			return 0;
		}

		std::string tmp = n;

		std::reverse(n.begin(), n.end());

		if (tmp == n)
		{
			std::cout << "yes" << '\n';
		}
		else
		{
			std::cout << "no" << '\n';
		}
	}
}
