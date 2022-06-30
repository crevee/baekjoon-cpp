//BaekJoon_1547
//알파벳 개수

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 71.480%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int M = 0, X = 0, Y = 0, point = 1;


	std::cin >> M;
	
	for (int i = 0; i < M; i++)
	{
		std::cin >> X >> Y;

		if (X == point) point = Y;
		else if (Y == point) point = X;
	}

	std::cout << point;
	
}	
