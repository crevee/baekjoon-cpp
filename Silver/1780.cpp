//BaekJoon_1780
//종이의 개수


/*
* 제한 시간 : 348ms / 2s
* 메모리 제한 : 20704KB / 256MB
* 정답 비율 : 58.462%
*/

#include <iostream>

int paper[2187][2187];
int ans[3];
int check_point;

void solve(int start_x, int start_y, int size) {

	check_point = paper[start_x][start_y];

	for (int i = start_x; i < start_x + size; i++) {
		for (int j = start_y; j < start_y + size; j++) {
			if (paper[i][j] != paper[start_x][start_y]) {
				solve(start_x, start_y, size / 3);
				solve(start_x + size * 1 / 3, start_y, size / 3);
				solve(start_x + size * 2 / 3, start_y, size / 3);

				solve(start_x, start_y + size * 1 / 3, size / 3);
				solve(start_x + size * 1 / 3, start_y + size * 1 / 3, size / 3);
				solve(start_x + size * 2 / 3, start_y + size * 1 / 3, size / 3);
				
				solve(start_x, start_y + size * 2 / 3, size / 3);
				solve(start_x + size * 1 / 3, start_y + size * 2 / 3, size / 3);
				solve(start_x + size * 2 / 3, start_y + size * 2 / 3, size / 3);

				return;
			}
		}
	}

	ans[paper[start_x][start_y] + 1]++;
	return;
}



int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int n;

	std::cin >> n;


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cin >> paper[i][j];
		}
	}

	solve(0, 0, n);

	std::cout << ans[0] << '\n' << ans[1] << '\n' << ans[2];

	return 0;
}
