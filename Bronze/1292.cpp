//BaekJoon_1292.cpp
//쉽게 푸는 문제

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 56.948%
*/

#include <iostream>


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);


	int a, b, count = 0;
	int* sequence;

	int result = 0;

	std::cin >> a >> b;

	sequence = new int [b + 1] {0};


	for (int i = 1; i <= b; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			sequence[count] = i;
			if (count > b)
			{
				break;
			}
			count++;
			
		}
	}


	for (int k = a; k <= b; k++)
	{
		result += sequence[k - 1];
	}
	std::cout << result;

	return 0;
}
