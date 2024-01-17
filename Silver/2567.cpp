//BaekJoon_2567
//색종이 - 2


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2032KB / 128MB
* 정답 비율 : 43.731%
*/

#include <iostream>

using namespace std;

bool map[101][101];

int dx[4]{ 0, 1, 0, -1 };
int dy[4]{ 1, 0, -1, 0 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, result = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b;

		cin >> a >> b;

		for (int i = a; i < a + 10; i++) {
			for (int j = b; j < b + 10; j++) {
				map[i][j] = true;
			}
		}
	}

	for (int i = 1; i < 101; i++) {
		for (int j = 1; j < 101; j++) {
			if (map[i][j] == true) {
				for (int k = 0; k < 4; k++) {
					if (map[i + dx[k]][j + dy[k]] == 0) {
						result++;
					}
				}
			}
		}
	}

	cout << result;

	return 0;
}
