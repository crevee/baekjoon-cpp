//BaekJoon_1546.cpp
//평균

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 49.058%
*/

#include <iostream>


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);


	int count = 0;
	int* divisor;


	std::cin >> count;

	divisor = new int[count];


	for(int i = 0; i < count; i++)
	{
		std::cin >> divisor[i];
	}

	for (int i = 0; i < count-1; i++)
	{
		for (int j = i+ 1; j < count; j++)
		{
			if (divisor[i] > divisor[j])
			{
				int temp = divisor[i];
				divisor[i] = divisor[j];
				divisor[j] = temp;
			}
		}
	}

	std::cout << divisor[0] * divisor[count - 1];

	return 0;

}
