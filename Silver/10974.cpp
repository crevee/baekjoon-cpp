//BaekJoon_10974
//모든 순열


/*
* 제한 시간 : 20ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 63.448%
*/

#include <iostream>

int n, check[8]{};
bool visited[8]{};

void Permutation(int count) {
	if (count == n) {
		for (int i = 0; i < n; i++) {
			std::cout << check[i] + 1 << ' ';
		}
		std::cout << '\n';
		return;
	}
	
	for (int i = 0; i < n; i++) {
		if (visited[i] != true) {
			check[count] = i;
			visited[i] = true;

			Permutation(count + 1);

			visited[i] = false;
		}
	}
}

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::cin >> n;

	Permutation(0);

	return 0;
}
