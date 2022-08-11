//BaekJoon_2742
//기찍 N

/*
* 제한 시간 : 12ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 68.519%
*/

#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;

	std::cin >> n;

	for (int i = n; i > 0; i--)
	{
		std::cout << i << '\n';
	}
	return 0;
}
