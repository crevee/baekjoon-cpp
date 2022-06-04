//BaekJoon_10869
//사칙연산

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 48.822%
*/

#include <iostream>

int main() {

	int A = 0, B = 0;
	scanf("%d %d", &A, &B);
	std::cout << A + B << std::endl
			  << A - B << std::endl
			  << A * B << std::endl
			  << A / B << std::endl
			  << A % B << std::endl;
}
