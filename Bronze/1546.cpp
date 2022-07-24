//BaekJoon_1546.cpp
//평균

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 49.058%
*/

#include<iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n = 0, m = 0;

	double result = 0;
	
	double* score;

	std::cin >> n;

	score = new double [n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> score[i];
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (score[i] > score[j])
			{
				int tmp = score[i];
				score[i] = score[j];
				score[j] = tmp;
			}
		}
	}



	for (int i = 0; i < n; i++)
	{
		result += score[i] / score[n - 1] * 100;
	}

	std::cout << result / n;

	return 0;

}
