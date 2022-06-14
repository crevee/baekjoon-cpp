//BaekJoon_10872
//팩토리얼

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 51.612%
*/

#include <iostream>

int main() {

	int N = 0;
	int M = 1;

	std::cin >> N;

	for(int i = 1; i <= N; i++)
	{
		M *= i;
	}

	std::cout << M;

	return 0;
}
