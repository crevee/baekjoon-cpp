//BaekJoon_10951
//A + B - 4

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 35.471%
*/

//방법 1

#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int a, b;

	while (!(std::cin >> a >> b).eof())
	{
		std::cout << a + b << '\n';
	}
	return 0;
}

//방법 2

#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int a, b;

	while (std::cin >> a >> b)
	{
		std::cout << a + b << '\n';
	}
	return 0;
}
