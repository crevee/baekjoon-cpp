//BaekJoon_2630
//색종이 만들기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2084KB / 128MB
* 정답 비율 : 68.849%
*/

#include <iostream>

int n;
int paper[128][128]{};
int blue = 0, white = 0;

void Count(int y, int x, int size) {
	int check = paper[y][x];

	for (int i = y; i < y + size; i++) {
		for (int j = x; j < x + size; j++) {
			if (check == 0 && paper[i][j] == 1) {
				check = 2;
			}
			else if (check == 1 && paper[i][j] == 0) {
				check = 2;
			}

			if(check == 2)
			{
				Count(y, x, size / 2);
				Count(y, x + size / 2, size / 2);
				Count(y + size / 2, x, size / 2);
				Count(y + size / 2, x + size / 2, size / 2);
				return;
			}
		}
	}

	if (check == 0) {
		white++;
	}
	else {
		blue++;
	}
}

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cin >> paper[i][j];
		}
	}

	Count(0, 0, n);
	std::cout << white << '\n';
	std::cout << blue << '\n';
}
