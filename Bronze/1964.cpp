//BaekJoon_1964
//오각형, 오각형, 오각형...

/*
* 제한 시간 : 12ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 46.247%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n = 0, answer = 0;
	long long dot = 0;

	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			dot += 5;
		}
		else if (i > 1)
		{
			dot += 3 * i + 1;
		}
	}

	answer = dot % 45678;

	std::cout << answer;

	return 0;

}
