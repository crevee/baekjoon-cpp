//BaekJoon_1730
//판화

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2044KB / 128MB
* 정답 비율 : 35.548%
*/

#include<iostream>
#include<string>

using namespace std;

int n;
string m;
bool p[100][100];
bool h[100][100];
int row, col;

bool CheckLocation(const int& row, const int& col) {
	if (row < 0 || row >= n || col < 0 || col >= n) {
		return false;
	}
	return true;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < m.size(); i++) {
		if (m[i] == 'U') {
			if (!CheckLocation(row - 1, col)) {
				continue;
			}
			p[row][col] = true;
			p[--row][col] = true;
		}
		else if (m[i] == 'D') {
			if (!CheckLocation(row + 1, col)) {
				continue;
			}
			p[row][col] = true;
			p[++row][col] = true;
		}
		else if (m[i] == 'L') {
			if (!CheckLocation(row, col - 1)) {
				continue;
			}
			h[row][col] = true;
			h[row][--col] = true;
		}
		else {
			if (!CheckLocation(row, col + 1)) {
				continue;
			}
			h[row][col] = true;
			h[row][++col] = true;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (p[i][j] && h[i][j]) {
				cout << '+';
			}
			else if (p[i][j]) {
				cout << '|';
			}
			else if (h[i][j]) {
				cout << '-';
			}
			else {
				cout << '.';
			}
		}
		cout << "\n";
	}
}
