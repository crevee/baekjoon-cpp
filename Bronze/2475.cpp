//BaekJoon_1408
//24

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 74.795%
*/

#include <iostream>

int main() {
	
	int A = 0, B = 0, C = 0, D = 0, E = 0;
	scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
	std::cout << ((A*A)+(B*B)+(C*C)+(D*D)+(E*E))%10 << std::endl;
}
