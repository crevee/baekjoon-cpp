//BaekJoon_1453.cpp
//피시방 알바

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 62.121%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n = 0, number = 0, result = 0;
	int seat[101]{ 0 };

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> number;
		seat[number] ++;
	}

	for (int i = 0; i < 101; i++)
	{
		if (seat[i] >= 2)
		{
			result += seat[i] - 1;
		}
	}

	std::cout << result;

	return 0;

}
