//BaekJoon_9663
//N-Queen

/*
* 제한 시간 : 4352ms / 10s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 47.077%
*/

#include <iostream>

int map[15];
int n, result = 0;

bool Check(int x) {
	for (int y = 0; y < x; y++) {
		if (map[y] == map[x] || abs(map[x] - map[y]) == x - y) {
			return false;
		}
	}
	return true;
}

void Nqueen(int x) {
	if (x == n) {
		result++;
	}
	else {
		for (int i = 0; i < n; i++) {
			map[x] = i;
			if (Check(x)) {
				Nqueen(x + 1);
			}
		}
	}
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::cin >> n;

	Nqueen(0);

	std::cout << result;

	return 0;
}
