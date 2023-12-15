//BaekJoon_14891
//톱니바퀴

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 54.906%
*/

#include <iostream>

using namespace std;

int result = 0, cnt = 1;
char gear[5][9];

void Spin(int n, int dir) {
	char tmp;

	if (dir == 1) {
		tmp = gear[n][8];

		for (int i = 8; i > 1; i--) {
			gear[n][i] = gear[n][i - 1];
		}
		gear[n][1] = tmp;
	}
	else {
		tmp = gear[n][1];

		for (int i = 1; i < 8; i++) {
			gear[n][i] = gear[n][i + 1];
		}
		gear[n][8] = tmp;
	}
}

void RightSide(int n, int dir) {
	if (n > 4) {
		return;
	}
	if (gear[n][3] != gear[n + 1][7]) {
		RightSide(n + 1, dir * -1);
		Spin(n + 1, dir * -1);
	}
}

void LeftSide(int n, int dir) {
	if (n < 1) {
		return;
	}
	if (gear[n][7] != gear[n - 1][3]) {
		LeftSide(n - 1, dir * -1);
		Spin(n - 1, dir * -1);
	}

}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int k, n, dir;
	
	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= 8; j++) {
			cin >> gear[i][j];
		}
	}

	cin >> k;

	for (int i = 0; i < k; i++) {
		cin >> n >> dir;
		RightSide(n, dir);
		LeftSide(n, dir);
		Spin(n, dir);
	}

	for (int i = 1; i <= 4; i++) {
		if (gear[i][1] == '1') {
			result += cnt;
		}
		cnt *= 2;
	}
	cout << result;

	return 0;
}
