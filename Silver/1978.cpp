//BaekJoon_1978
//소수 찾기

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 46.873%
*/

#include <iostream>

int result = 0, tmp = 0;

int Prime(int a)
{
	for (int j = 1; j <= a; j++)
	{
		if (a % j == 0)
		{
			tmp++;
		}
	}

	if (tmp == 2)
	{
		result++;
	}
	tmp = 0;

	return 0;
}


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, num;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> num;

		Prime(num);
	}

	std::cout << result;

	return 0;
}
