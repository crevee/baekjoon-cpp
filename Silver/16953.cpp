//BaekJoon_16953
//A -> B


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 40.253%
*/

#include <iostream>
#include <algorithm>

int result = 987654321;
long long a, b, count;

void Dfs(long long input, int count) {
	if (input > b) {
		return;
	}
	if (input == b) {
		result = std::min(result, count);
	}
	Dfs(input * 2, count + 1);
	Dfs(input * 10 + 1, count + 1);
}


int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::cin >> a >> b;

	Dfs(a, 1);

	if (result == 987654321) {
		std::cout << -1;
	}
	else {
		std::cout << result;
	}
}
