//BaekJoon_1233.cpp
//주사위

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 54.056%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);


	int s1 = 0, s2 = 0, s3 = 0, sum = 0;
	int result[81]{ 0 };
	int answer = 0, repeat = 0;


	std::cin >> s1 >> s2 >> s3;

	for (int i = 1; i <= s1; i++)
	{
		for (int j = 1; j <= s2; j++)
		{
			for (int k = 1; k <= s3; k++)
			{
				sum = i + j + k;
				result[sum] += 1;

			}
		}
	}

	for (int i = 0; i < 81; i++)
	{
		if (repeat < result[i])
		{
			repeat = result[i];
			answer = i;
		}

	}

	std::cout << answer;

	return 0;
}
