//BaekJoon_2439.cpp
//별 찍기 -2

/*
* 제한 시간 : 4ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 56.386%
*/

#include <iostream>

int main() {

	int N = 0;

	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = N-1; j > i; j--)
		{
			std::cout << " ";
		}
		for (int k = 0; k < i+1; k++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	return 0;
}
