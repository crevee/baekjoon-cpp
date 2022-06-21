//BaekJoon_2480
//주사위 세개
/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 50.462%
*/

#include <iostream>

int main() {

	int a = 0, b = 0, c = 0;

	std::cin >> a >> b >> c;

	if (a == b && a == c)
	{
		std::cout << 10000 + a * 1000;
	}
	else if ( a != b && b != c)
	{
		int max = (a >= b && a >= c) ? a : (b >= a && b >= c) ? b : c;

		std::cout << (max) * 100;
	}
	else
	{
		if (b == c)
		{
			std::cout << 1000 + (b) * 100;
		}
		else
		{
			std::cout << 1000 + (a) * 100;
		}
	}

	return 0;
}
