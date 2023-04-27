//BaekJoon_1236
//성 지키기

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 41.228%
*/

#include<iostream>

using namespace std;

char castle[50][50];

int Max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	int empty_row = n, empty_col = m;

	for (int i = 0; i < n; i++) {
		bool guard = false;
		for (int j = 0; j < m; j++) {
			cin >> castle[i][j];
			if (castle[i][j] == 'X') {
				guard = true;
			}
		}
		if (guard) {
			--empty_row;
		}
	}

	for (int j = 0; j < m; j++) {
		bool guard = false;
		for (int i = 0; i < n; i++) {
			if (castle[i][j] == 'X') {
				guard = true;
				break;
			}
		}
		if (guard) {
			--empty_col;
		}
	}
	cout << Max(empty_row, empty_col);
}
