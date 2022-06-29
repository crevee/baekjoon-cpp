//BaekJoon_1267
//핸드폰 요금

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 44.863%
*/

#include <iostream>

int main() {

	int N = 0, time = 0, Y = 0, M = 0;

	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		std::cin >> time;
		
		Y += time / 30 * 10 + 10;
		M += time / 60 * 15 + 15;
	}

	if(Y > M)
	{
		std::cout << "M " << M;
	}
	else if (M > Y)
	{
		std::cout << "Y " << Y;
	}
	else if (M == Y)
	{
		std::cout << "Y " << "M " << Y;
	}


	return 0;
}
