//BaekJoon_2110
//공유기 설치

/*
* 제한 시간 : 32ms / 2s
* 메모리 제한 : 3688KB / 128MB
* 정답 비율 : 36.324%
*/

#include<iostream>
#include<algorithm>
#include<vector>

int Max(int a, int b) {
	return a > b ? a : b;
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, c, router, answer = 0;
	std::vector<int> position;

	std::cin >> n >> c;

	for (int i = 0; i < n; i++) {
		int temp;
		std::cin >> temp;
		position.push_back(temp);
	}

	std::sort(position.begin(),position.end());

	int start = 1;
	int end = position[n - 1] - position[0];

	while (start <= end) {
		router = 1;
		int mid = (start + end) / 2;
		int start_position = position[0];

		for (int i = 1; i < n; i++) {
			if (position[i] - start_position >= mid) {
				router++;
				start_position = position[i];
			}
		}

		if (router >= c) {
			answer = Max(answer, mid);
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}
	std::cout << answer;
}
