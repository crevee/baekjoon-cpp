//BaekJoon_4153
//직각삼각형

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 50.962%
*/

#include <iostream>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int a[3]{0};

	while (1)
	{
		std::cin >> a[0] >> a[1] >> a[2];

		if (a[0] == 0 && a[1] == 0 && a[2] == 0)
		{
			return 0;
		}

		std::sort(a, a + 3);

		if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2])
		{
			std::cout << "right" << '\n';
		}
		else
		{
			std::cout << "wrong" << '\n';
		}
	}
}
