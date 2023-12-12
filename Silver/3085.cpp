//BaekJoon_3085
//사탕 놓기

/*
* 제한 시간 : 68ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 33.352%
*/

#include <iostream>
#include <algorithm>

using namespace std;

int result = 0;

void CountColCandy(char a[51][51], int size) {
	for (int i = 0; i < size; i++) {
		int cnt = 1;

		for (int j = 0; j < size; j++) {
			if (a[i][j] == a[i][j + 1]) {
				cnt++;
			}
			else {
				if (cnt > result) {
					result = cnt;
				}
				cnt = 1;
			}
		}
	}
}

void CountRowCandy(char a[51][51], int size) {
	for (int i = 0; i < size; i++) {
		int cnt = 1;

		for (int j = 0; j < size; j++) {
			if (a[j][i] == a[j + 1][i]) {
				cnt++;
			}
			else {
				if (cnt > result) {
					result = cnt;
				}
				cnt = 1;
			}
		}
	}
}

int main() {

	int n;
	char board[51][51];

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			swap(board[i][j], board[i][j + 1]);

			CountRowCandy(board, n);
			CountColCandy(board, n);

			swap(board[i][j + 1], board[i][j]);

			swap(board[j][i], board[j + 1][i]);

			CountRowCandy(board, n);
			CountColCandy(board, n);

			swap(board[j + 1][i], board[j][i]);
		}
	}
	cout << result;
}
