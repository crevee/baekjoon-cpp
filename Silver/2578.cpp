//BaekJoon_2578
//빙고


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 45.884%
*/

#include <iostream>

int table[5][5]{};

std::pair<int, int> num[26];

bool check() {
	int bingo_count = 0;
	int left_cross = 0;
	int right_cross = 0;

	for (int i = 0; i < 5; i++) {
		int col = 0;
		int row = 0;

		for (int j = 0; j < 5; j++) {
			if (table[i][j] == 0) {
				row++;
			}
			if (table[j][i] == 0) {
				col++;
			}
		}

		if (col == 5) {
			bingo_count++;
		}
		if (row == 5) {
			bingo_count++;
		}
		if (table[i][i] == 0) {
			right_cross++;
		}
		if (table[i][4 - i] == 0) {
			left_cross++;
		}
	}

	if (right_cross == 5) {
		bingo_count++;
	}
	if (left_cross == 5) {
		bingo_count++;
	}
	if (bingo_count >= 3) {
		return true;
	}
	return false;
}

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			std::cin >> table[i][j];
			num[table[i][j]] = { i,j };
		}
	}

	int answer = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			answer++;

			int number;

			std::cin >> number;

			table[num[number].first][num[number].second] = 0;
			
			if (i > 1) {
				if (check() == true) {
					std::cout << answer;
					return 0;
				}
			}
		}
	}
}
