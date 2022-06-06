//BaekJoon_2738
//행렬 덧셈

/*
* 제한 시간 : 8ms / 1s
* 메모리 제한 : 2100KB / 128MB
* 정답 비율 : 70.251%
*/

#include <iostream>

int N = 0, M = 0;
int A[101][101], B[101][101];

int main(){

	std::cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			std::cin >> A[i][j];
		}
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			std::cin >> B[i][j];
		}
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			std::cout << A[i][j] + B[i][j] << ' ';
		}std::cout << std::endl;
	}

	return 0;
}
