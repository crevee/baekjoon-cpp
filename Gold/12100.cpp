//BaekJoon_12100
//2048 (

/*
* 제한 시간 : 12ms / 1s
* 메모리 제한 : 2160KB / 512MB
* 정답 비율 : 26.090%
*/

#include<iostream>
#include<vector>

using namespace std;

int n;
long long answer = 0;

int Max(int a, int b) {
	return a > b ? a : b;
}

long long GetMax(vector<vector<long long >> board) {
	long long result = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			result = Max(result, board[i][j]);
		}
	}
	return result;
}

vector<vector<long long>> right(vector<vector<long long>> board) {
	vector<vector<bool>> check(n, vector<bool>(n, false));

	for (int i = 0; i < n; i++) {
		for (int j = n - 2; j >= 0; j--) {
			if (board[i][j] == 0) {
				continue;
			}
			for (int k = j + 1; k < n; k++) {
				if (board[i][k] == board[i][k - 1] && !check[i][k]) {
					board[i][k] *= 2;
					board[i][k - 1] = 0;
					check[i][k] = true;
					break;
				}
				else if (board[i][k] == 0) {
					board[i][k] = board[i][k - 1];
					board[i][k - 1] = 0;
				}
				else {
					break;
				}
			}
		}
	}
	return board;
}

vector<vector<long long>> left(vector<vector<long long>> board) {
	vector<vector<bool>> check(n, vector<bool>(n, false));

	for (int i = 0; i < n; i++) {
		for (int j = 1; j < n; j++) {
			if (board[i][j] == 0) {
				continue;
			}
			for (int k = j - 1; k >= 0; k--) {
				if (board[i][k] == board[i][k + 1] && !check[i][k]) {
					board[i][k] *= 2;
					board[i][k + 1] = 0;
					check[i][k] = true;
					break;
				}
				else if (board[i][k] == 0) {
					board[i][k] = board[i][k + 1];
					board[i][k + 1] = 0;
				}
				else {
					break;
				}
			}
		}
	}
	return board;
}

vector<vector<long long>> down(vector<vector<long long>> board) {
	vector<vector<bool>> check(n, vector<bool>(n, false));

	for (int i = 0; i < n; i++) {
		for (int j = n - 2; j >= 0; j--) {
			if (board[j][i] == 0) {
				continue;
			}
			for (int k = j + 1; k < n; k++) {
				if (board[k][i] == board[k -1][i] && !check[k][i]) {
					board[k][i] *= 2;
					board[k - 1][i] = 0;
					check[k][i] = true;
					break;
				}
				else if (board[k][i] == 0) {
					board[k][i] = board[k-1][i];
					board[k-1][i] = 0;
				}
				else {
					break;
				}
			}
		}
	}
	return board;
}

vector<vector<long long>> up(vector<vector<long long>> board) {
	vector<vector<bool>> check(n, vector<bool>(n, false));

	for (int i = 0; i < n; i++) {
		for (int j = 1; j < n; j++) {
			if (board[j][i] == 0) {
				continue;
			}
			for (int k = j - 1; k >= 0; k--) {
				if (board[k][i] == board[k + 1][i] && !check[k][i]) {
					board[k][i] *= 2;
					board[k + 1][i] = 0;
					check[k][i] = true;
					break;
				}
				else if (board[k][i] == 0) {
					board[k][i] = board[k + 1][i];
					board[k + 1][i] = 0;
				}
				else {
					break;
				}
			}
		}
	}
	return board;
}

void DFS(int count, vector<vector<long long>> board) {
	answer = Max(answer, GetMax(board));

	if (count == 5) {
		return;
	}
	DFS(count + 1, right(board));
	DFS(count + 1, left(board));
	DFS(count + 1, up(board));
	DFS(count + 1, down(board));
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	vector<vector<long long>> board(n, vector<long long>(n));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}
	DFS(0, board);

	cout << answer << "\n";
}
