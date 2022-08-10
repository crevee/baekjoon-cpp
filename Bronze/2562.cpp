//BaekJoon_2562
//최댓값

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 45.862%
*/

#include <iostream>


int main() {


	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, max = 0, count;


	for (int i = 0; i < 9; i++)
	{
		std::cin >> n;

		if (n > max)
		{
			max = n;
			count = i + 1;
		}
	}

	std::cout << max << std::endl;
	std::cout << count;

	return 0;

}
