//BaekJoon_11945
//뜨거운 붕어빵

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 32MB
* 정답 비율 : 62.640%
*/

#include <iostream>

int main() {

	int N = 0, M = 0;

	std::cin >> N >> M;

	char answer[11][11]{};

	for (int i = 0; i < N; i++)
	{
		std::cin >> answer[i];
		
	}


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M / 2; j++)
		{
			std::swap(answer[i][j], answer[i][M - j - 1]);
		}
	}


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			std::cout << answer[i][j];
		}
		std::cout << "\n";
	}

	return 0;
}
