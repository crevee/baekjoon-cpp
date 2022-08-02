//BaekJoon_1094.cpp
//막대기

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 74.921%
*/

#include<iostream>


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int x, result = 0, num = 64;


	std::cin >> x;

	while (x > 0)
	{
		if (x / num > 0)
		{
			result += x / num;
			x -= num;
		}
		num /= 2;
	}

	std::cout << result;

	return 0;
}
