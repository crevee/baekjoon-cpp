//BaekJoon_2884
//윤년

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 38.004%
*/

#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int h, m;

	std::cin >> h >> m;

	if (m >= 45)
	{
		m -= 45;
	}
	else
	{
		if (h == 0)
		{
			h = 24;
		}
		
		h--;

		m += 60 - 45;
	}

	std::cout << h << ' ' << m;
	
	return 0;
}
