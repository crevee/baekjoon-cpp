//BaekJoon_10950
//A + B - 3

/*
* 제한 시간 : 4ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 58.256%
*/

#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);


	int t, a, b;

	std::cin >> t;

	for (int i = 0; i < t; i++)
	{
		std::cin >> a >> b;
		std::cout << a + b << std::endl;
	}
	return 0;
}
