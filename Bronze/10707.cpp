//BaekJoon_10707.cpp
//수도요금

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 75.610%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int a = 0, b = 0, c = 0, d = 0, p = 0, value = 0;

	std::cin >> a >> b >> c >> d >> p;


	if (p < c)
	{
		 a * p < b ? value = a * p : value = b;
	}
	else
	{
		a * p < b + (p - c) * d ? value = a * p : value = b + (p - c) * d;
	}

	std::cout << value;

	return 0;

}
