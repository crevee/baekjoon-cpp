//BaekJoon_2669
//직사각형 네개의 합집합의 면적 구하기


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2032KB / 128MB
* 정답 비율 : 75.663%
*/

#include <iostream>

using namespace std;

bool square[101][101];

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c, d;

	for (int i = 0; i < 4; i++) {
		cin >> a >> b >> c >> d;

		for (int j = a; j < c; j++) {
			for (int k = b; k < d; k++) {
				square[j][k] = true;
			}
		}
	}

	int result = 0;

	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			if (square[i][j] == true) {
				result++;
			}
		}
	}
	cout << result;
}
