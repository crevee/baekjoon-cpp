//BaekJoon_1940
//주몽

/*
* 제한 시간 : 92ms / 2s
* 메모리 제한 : 2200KB / 128MB
* 정답 비율 : 47.266%
*/

#include <iostream>
#include <algorithm>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int n, m, count = 0;
	int* a;

	std::cin >> n >> m;

	a = new int[n];

	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}

	std::sort(a, a + n);

	if (m > 200000) {
		std::cout << 0;
	}
	else {
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (m == a[i] + a[j]) {
					count++;
				}
			}
		}
		std::cout << count;
	}
}
