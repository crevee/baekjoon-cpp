//BaekJoon_16430
//제리와 톰

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 85.415%
*/

#include <iostream>

int main() {

	int A = 0, B = 0, P = 0, Q = 0;;

	std::cin >> A >> B;

	P = B - A;
	Q = B;

	std::cout << P << " " << Q;

	return 0;
}
