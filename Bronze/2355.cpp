//BaekJoon_2355
//시그마

/*
* 제한 시간 : 0ms / 0.25s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 26.142%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);


	long long a, b, sum = 0;

	std::cin >> a >> b;

	if (a <= b)
	{
		sum = b * (b + 1) / 2 - a * (a - 1) / 2;
	}
	else
	{
		sum = a * (a + 1) / 2 - b * (b - 1) / 2;
	}

	std::cout << sum;

	return 0;
}
