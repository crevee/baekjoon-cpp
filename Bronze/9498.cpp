//BaekJoon_9498
//시험 성적

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 55.475%
*/

#include <iostream>

int main() {

	int score = 0;

	std::cin >> score;

	if (90 <= score)
	{
		std::cout << "A" << '\n';
	}
	else if (80 <= score)
	{
		std::cout << "B" << '\n';
	}
	else if (70 <= score)
	{
		std::cout << "C" << '\n';
	}
	else if (60 <= score)
	{
		std::cout << "D" << '\n';
	}
	else
		std::cout << "F" << '\n';

	return 0;
}
