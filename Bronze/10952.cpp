//BaekJoon_10952
//A+B - 5

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 51.663%
*/

#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int a = 1, b = 1;

	while (1)
	{
		std::cin >> a >> b;

		if (a == 0 && b == 0)
		{
			break;
		}
		std::cout << a + b << '\n';
	}
	return 0;
}
