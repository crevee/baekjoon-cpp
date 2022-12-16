//BaekJoon_13866
//팀 나누기

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 61.481%
*/

#include <iostream>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int score[4];

	for (int i = 0; i < 4; i++) {
		std::cin >> score[i];
	}
	std::sort(score, score + 4);

	if (score[0] + score[3] > score[2] + score[1]) {
		std::cout << score[3] + score[0] - score[2] - score[1];
	}
	else {
		std::cout << score[2] + score[1] - score[3] - score[0];
	}
}
