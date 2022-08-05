//BaekJoon_1316.cpp
//그룹 단어 체커

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 51.992%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, count = 0;
	std::string world;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> world;

		int check[27]{0};
		bool flag = true;

		for (int j = 0; j < world.length(); j++)
		{
			for (int k = 0; k < j; k++)
			{
				if (world[j] != world[j - 1] && world[j] == world[k])
				{
					flag = false;
					break;
				}
			}
		}

		if (flag)
		{
			count++;
		}
	}

	std::cout << count;

	return 0;
}
