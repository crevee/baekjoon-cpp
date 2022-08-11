//BaekJoon_2753
//윤년

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 52.657%
*/

#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int year;

	std::cin >> year;

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		std::cout << 1;
	}
	else
	{
		std::cout << 0;
	}
	return 0;
}
