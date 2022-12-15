//BaekJoon_2460
//지능형 기차 2

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 83.320%
*/

#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int result = 0, max = 0;

	for (int i = 0; i < 10; i++) {
		int in = 0, out = 0;

		std::cin >> out >> in;

		result  += -out + in;

		if (max < result) {
			max = result;
		}
	}
	std::cout << max;
}
