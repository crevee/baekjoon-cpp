//BaekJoon_1449
//수리공 항승


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 46.474%
*/

#include<iostream>
#include <algorithm>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, l;
	int pipe[1001];
	int answer = 0;

	std::cin >> n >> l;

	for (int i = 0; i < n; i++) {
		std::cin >> pipe[i];
	}

	std::sort(pipe, pipe + n);

	int pipe_start = pipe[0];

	for (int i = 1; i < n; i++) {
		if (pipe[i] - pipe_start + 1 > l) {
			answer++;
			pipe_start = pipe[i];
		}
	}

	std::cout << answer + 1;
}
