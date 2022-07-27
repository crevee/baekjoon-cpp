//BaekJoon_1929.cpp
//소수 구하기

/*
* 제한 시간 : 188ms / 2s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 26.613%
*/


##방법 1 시간 188ms / 메모리 2020KB

#include <iostream>

bool prime(int i) {
	if (i < 2)
		return false;

	for (int j = 2; j * j <= i; j++)
	{
		if (i % j == 0)
		{
			return false;
		}
	}
	return true;
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int m, n;

	std::cin >> m >> n;

	for (int i = m; i <= n; i++)
	{
		if (prime(i))
		{
			std::cout << i << "\n";
		}
	}
	return 0;
}
