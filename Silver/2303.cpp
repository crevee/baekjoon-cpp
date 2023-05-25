//BaekJoon_2303
//숫자 게임


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2044KB / 128MB
* 정답 비율 : 43.527%
*/

#include<iostream>

using namespace std;

int card[1000][5];
int score[1000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> card[i][j];
		}
	}

	int max = 0, max_index = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5; j++) {
			for (int k = j + 1; k < 5; k++) {
				for (int h = k + 1; h < 5; h++) {
					if (score[i] < (card[i][j] + card[i][k] + card[i][h]) % 10) {
						score[i] = (card[i][j] + card[i][k] + card[i][h]) % 10;
					}
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		if (max < score[i]) {
			max = score[i];
			max_index = i;
		}
		if (max == score[i]) {
			if (i > max_index) {
				max_index = i;
			}
		}
	}
	cout << max_index + 1;
}
