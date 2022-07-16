//BaekJoon_14592.cpp
//2017 아주대학교 프로그래밍 경시대회 (Small)

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 64.531%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n = 0, winner = 0;

	std::cin >> n;

	int* s;
	s = new int[n];

	int* c;
	c = new int[n];

	int* l;
	l = new int[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> s[i] >> c[i] >> l[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (s[winner] < s[i])
		{
			winner = i;
		}
		else if (s[winner] == s[i])
		{
			if (c[winner] < c[i])
			{
				winner = winner;
			}
			else if (c[winner] == c[i])
			{
				if (l[winner] < l[i])
				{
					winner = winner;
				}
				else if (l[winner] > l[i])
				{
					winner = i;
				}
			}
		}
	}

	std::cout << winner + 1;

	return 0;
}
