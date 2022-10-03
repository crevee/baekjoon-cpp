//BaekJoon_1676
//팩토리얼 0의 개수

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 47.873%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, count = 0;

	std::cin >> n;

	for (int i = 5; i <= n; i*= 5) {
		count += n / i;
	}

	std::cout << count;

	return 0;
}
