//BaekJoon_2440
//별 찍기 -3

/*
* 제한 시간 : 4ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 68.077%
*/

#include <iostream>

int main() {

	int N = 0;

	std::cin >> N;

	for(int i = 0; i < N; i++)
	{
		for(int j = N ; j > i; j--)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	return 0;
}
