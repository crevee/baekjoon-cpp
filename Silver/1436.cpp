//BaekJoon_1436.cpp
//영화감독 숌


/*
* 제한 시간 : 64ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 51.174%
*/

#include <iostream>
#include <string>

int FindMovieName(int n)
{
	int movieTitle = 666;
	int count = 0;

	std::string target;

	while (1)
	{
		target = std::to_string(movieTitle);
		for (int j = 0; j < target.length() - 2; j++)
		{
			if (target[j] == '6' && target[j + 1] == '6' && target[j + 2] == '6')
			{
				count++;
				if (count == n)
					return movieTitle;
				break;
			}
		}movieTitle++;
	}
}


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;

	std::cin >> n;
	std::cout << FindMovieName(n);

	return 0;
}
