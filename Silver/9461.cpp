//BaekJoon_9461
//파도반 수열


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 42.570%
*/

#include <iostream>

int t, n;
long long P_array[101] = { 0, 1, 1, };

long long P(int num) {
	if (num < 3) {
		return P_array[num];
	}
	else if (P_array[num] == 0) {
		P_array[num] = P(num - 2) + P(num - 3);
	}
	return P_array[num];
}

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::cin >> t;

	while (t--) {
		std::cin >> n;

		std::cout << P(n) << '\n';
	}
}
