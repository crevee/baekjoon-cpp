//BaekJoon_2420
//사파리월드

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 42.580%
*/

#include <iostream>

int main(){

	long long N = 0, M = 0;

	scanf("%lld %lld", &N, &M);

	if (N - M < 0) {
		printf("%lld", -(N - M));
	}
	else
		printf("%lld", N - M);

	return 0;
}
