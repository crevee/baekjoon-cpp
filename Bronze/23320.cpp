//BaekJoon_23320.cpp
//홍익 절대평가

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 1024MB
* 정답 비율 : 64.728%
*/

#include <iostream>


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n = 0, x = 0, y = 0, y_student = 0;
	int* score;

	std::cin >> n;

	score = new int[n + 1];

	for (int i = 0; i < n; i++)
	{
		std::cin >> score[i];
	}


	std::cin >> x >> y;

	for (int i = 0; i < n; i++)
	{
		if (score[i] >= y)
		{
			y_student += 1;
		}
	}

	std::cout << n * (0.01 * x) << ' ' << y_student;

	return 0;
}
