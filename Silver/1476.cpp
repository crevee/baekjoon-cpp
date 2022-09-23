//BaekJoon_1476
//수열 정렬

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 4MB
* 정답 비율 : 66.384%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int e, s, m;
	int year = 1;

	std::cin >> e >> s >> m;

	while (1)
	{
		if ((year - e) % 15 == 0 && (year - s) % 28 == 0 && (year - m) % 19 == 0)
		{
			std::cout << year << '\n';
			return 0;
		}
		else
		{
			year++;
		}
	}
}
