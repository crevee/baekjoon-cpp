//BaekJoon_1100
//하얀 칸

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 71.659%
*/

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char map[8][8];
	int result = 0;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> map[i][j];

			if (i % 2 == 0 && j % 2 == 0 && map[i][j] == 'F') {
				result++;
			}
			else if (i % 2 == 1 && j % 2 == 1 && map[i][j] == 'F') {
				result++;
			}
		}
	}
	cout << result;

	return 0;
}
