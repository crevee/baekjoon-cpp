//BaekJoon_13458.cpp
//시험 감독

/*
* 제한 시간 : 116ms / 2s
* 메모리 제한 : 5928KB / 512MB
* 정답 비율 : 27.724%
*/

#include <iostream>

int main() {


	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n = 0, b = 0, c = 0;
	long long result = 0;

	std::cin >> n;

	int* i;
	i = new int[n + 1];

	for (int j = 0; j < n; j++)
	{
		std::cin >> i[j];
	}

	std::cin >> b >> c;

	for (int k = 0; k < n; k++)
	{
		if ((i[k] - b) % c > 0)
		{
			result += (i[k] - b) / c + 1;
		}
		else if (i[k] - b <= 0)
		{
			result += 0;
		}
		else if ((i[k] - b) % c == 0)
		{
			result += (i[k] - b) / c;
		}
		result++;
	}

	std::cout << result;

	return 0;
}
