//BaekJoon_1992
//쿼드트리


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2028KB / 128MB
* 정답 비율 : 61.519%
*/

#include <iostream>
#include <string>

std::string video_color[64];

void QuadTree(int size, int y, int x) {
	char cur = video_color[y][x];

	for (int i = y; i < y + size; i++) {
		for (int j = x; j < x + size; j++) {
			if (video_color[i][j] != cur) {
				std::cout << '(';
				QuadTree(size / 2, y, x);
				QuadTree(size / 2, y, x + size / 2);
				QuadTree(size / 2, y + size / 2, x);
				QuadTree(size / 2, y + size / 2, x + size / 2);
				std::cout << ')';
				return;
			}
		}
	}
	std::cout << cur;
}

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int n;

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> video_color[i];
	}
	QuadTree(n, 0, 0);
}
