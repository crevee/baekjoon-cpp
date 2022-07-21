//BaekJoon_1453.cpp
//피시방 알바

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 46.540%
*/

#include <iostream>


int main() {


	std::ios::sync_with_stdio(0);


	int n = 0, count = 0, init, tmp;

	std::cin >> n;

	init = n;


	while (1)
	{
		tmp = n % 10 *10 + (n / 10 + n % 10) % 10;
		
		count++;

		n = tmp;

		if (tmp == init)
			break;
	}

	std::cout << count;

	return 0;
}
