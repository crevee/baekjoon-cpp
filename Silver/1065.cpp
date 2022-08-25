//BaekJoon_1065
//한수


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 53.453%
*/

#include <iostream>

bool hanSu(int a)
{
	if (a < 100)
	{
		return true;
	}

	int a100, a10, a1;

	a100 = a / 100;
	a10 = a % 100 / 10;
	a1 = a % 10;

	if (a100 - a10 == a10 - a1)
	{
		return true;
	}
	return false;
}


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, cnt = 0;

	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (hanSu(i))
		{
			cnt++;
		}
	}
	std::cout << cnt;

	return 0;
}
