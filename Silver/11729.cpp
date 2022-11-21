//BaekJoon_11729
//하노이 탑 이동 순서

/*
* 제한 시간 : 124ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 49.846%
*/

#include <iostream>

void Hanoi(int n, int start, int mid, int end) {

	if (n == 1) {
		std::cout << start << " " << end << '\n';
		return;
	}
	Hanoi(n - 1, start, end, mid);

	std::cout << start << " " << end << "\n";

	Hanoi(n - 1, mid, start, end);
}


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int n;

	std::cin >> n;
	std::cout << (1 << n) - 1 << '\n';

	Hanoi(n, 1, 2, 3);

	return 0;
}
