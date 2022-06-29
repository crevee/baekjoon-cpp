//BaekJoon_1284
//집 주소

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 74.388%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int N = 1;

	while (N != 0)
	{
		std::cin >> N;
		
		if (N == 0)
			return 0;

		int sum = 0;

		while (1) {
			if (N % 10 == 1)
				sum += 2;
			else if (N % 10 == 0)
				sum += 4;
			else
				sum += 3;

			if (N < 10)
				break;

			N /= 10;
			sum += 1;
		}


		std::cout << sum + 2 << "\n";
	}
	return 0;
}
