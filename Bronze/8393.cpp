//BaekJoon_8393
//합
/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 65.238%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);


	int n = 0, sum = 0;

	std::cin >> n;

	for (int i = 0; i <= n; i++)
	{
		sum += i;
	}

	std::cout << sum;

	return 0;

}
