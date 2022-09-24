//BaekJoon_2108
//통계학

/*
* 제한 시간 : 76ms / 2s
* 메모리 제한 : 5224KB / 256MB
* 정답 비율 : 25.440%
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

std::vector<int> a;

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);


	int num, tmp, range, middle = 0, most_val, mean = 0;
	int most = -9999;
	int number[8001] = { 0 };
	bool not_first = 0;

	int n;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> tmp;
		a.push_back(tmp);
		mean += tmp;

		number[tmp + 4000]++;
	}

	std::sort(a.begin(), a.end());

	for (int i = 0; i < 8001; i++)
	{
		if (number[i] == 0) 
		{
			continue;
		}
		if (number[i] == most)
		{
			if (not_first)
			{
				most_val = i - 4000;
				not_first = false;
			}
		}
		if (number[i] > most)
		{
			most = number[i];
			most_val = i - 4000;
			not_first = 1;
		}
	}

	middle = a[a.size() / 2];
	mean = round((float)mean / n);
	range = a.back() - a.front();

	std::cout << mean << '\n' << middle << '\n' << most_val << '\n' << range;

	return 0;
}
