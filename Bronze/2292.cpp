//BaekJoon_2292
//벌집

/*
* 제한 시간 : 652ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 44.560%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n = 0, count = 0, sum = 1;

	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			sum += 1;
			count++;
		}
		else if(i > 1 && i == sum)
		{
			sum += 6 * count;
			count++;
		}
	}

	std::cout << count;

	return 0;
}
