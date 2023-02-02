//BaekJoon_1182
//부분수열의 합


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 44.260%
*/

#include <iostream>

int n, s, answer = 0;
int* a;

void Dfs(int index, int sum) {
	if (index == n) {
		return;
	}
	if (sum + a[index] == s) {
		answer++;
	}
	Dfs(index + 1, sum);
	Dfs(index + 1, sum + a[index]);
}

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::cin >> n >> s;

	a = new int[n];

	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}

	Dfs(0, 0);

	std::cout << answer;
}
