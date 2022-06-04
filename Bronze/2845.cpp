//BaekJoon_2845
//파티가 끝나고 난 뒤

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 70.150%
*/

#include <iostream>

int main() {

	int L = 0, P = 0;
	int N1 = 0, N2 = 0, N3 = 0, N4 = 0, N5 = 0;

	scanf("%d %d", &L, &P);
	scanf("%d %d %d %d %d", &N1, &N2, &N3, &N4, &N5);

	int R = L * P;

	printf("%d %d %d %d %d", N1 - R, N2 - R, N3 - R, N4 - R, N5 - R);
}
