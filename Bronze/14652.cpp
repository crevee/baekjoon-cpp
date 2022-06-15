//BaekJoon_14652
//나는 행복합니다~

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 65.778%
*/

#include <iostream>

int main() {

	int N = 0, M = 0, K = 0;
	int realn = 0, realm = 0;

	std::cin >> N >> M >> K;

	realn = K / M;
	realm = K % M;

	std::cout << realn << " " << realm;

	return 0;
}
