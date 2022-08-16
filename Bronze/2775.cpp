//BaekJoon_2775
//부녀회장이 될테야

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 56.562%
*/

#include <iostream>

int getPeople(int a, int b)
{
	if (b == 1)
	{
		return 1;
	}
	if (a == 0)
	{
		return b;
	}
	return (getPeople(a - 1, b) + getPeople(a, b - 1));
}

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int t, k, n, people = 0;

	std::cin >> t;

	for (int i = 0; i < t; i++)
	{
		std::cin >> k >> n;

		std::cout << getPeople(k, n) << '\n';
	}

	return 0;
}
