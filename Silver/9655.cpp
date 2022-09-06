//BaekJoon_9655
//돌 게임


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 67.237%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);


	int n;

	std::cin >> n;

	if (n % 2 == 0)
	{
		std::cout << "CY";
	}
	else
	{
		std::cout << "SK";
	}


	return 0;
}
