//BaekJoon_1085
//직사각형에서 탈출

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 61.988%
*/

#include <iostream>

int main() {

	int x = 0, y = 0, w = 0, h = 0,min = 0;

	std::cin >> x >> y >> w >> h;

	if (w - x > x ?  min = x : min = w- x)
	{
		if (h - y > y ? (min > y ? min = y : min) : (min > h - y ? min = h - y : min));
	}

	std::cout << min;

	return 0;
}
