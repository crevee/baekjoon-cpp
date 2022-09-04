//BaekJoon_14916
//거스름돈

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 48.297%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, result;

	std::cin >> n;

	int nRemainFive = n % 5;

	if (n == 1 || n == 3)
	{
		result = -1;
	}
	else if (nRemainFive % 2 == 0)
	{
		result = n / 5 + nRemainFive / 2;
	}
	else
	{
		result = ((n / 5) - 1) + ((nRemainFive + 5) / 2);
	}

	std::cout << result;

	return 0;
}
