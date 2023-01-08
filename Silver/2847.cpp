//BaekJoon_2847
//게임을 만든 동준이


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 52.120%
*/

#include <iostream>
#include <vector>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int n;

	std::cin >> n;

	std::vector<int> v(n);

	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}

	int result = 0;
	int current = v[n - 1];

	for (int i = n - 2; i >= 0; i--) {
		while (v[i] >= current) {
			v[i]--;
			result++;
		}
		current = v[i];
	}
	std::cout << result;
}
