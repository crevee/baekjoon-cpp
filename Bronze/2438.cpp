//BaekJoon_2438
//별 찍기 - 1

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 62.642%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < i + 2; j++)
		{
			std::cout << '*';
		}
		std::cout << '\n';
	}
	return 0;
}
