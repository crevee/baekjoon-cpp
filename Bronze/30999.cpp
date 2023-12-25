//BaekJoon_30999
//민주주의

/*
* 제한 시간 : 0ms / 0.5s
* 메모리 제한 : 2032KB / 1024MB
* 정답 비율 : 81.301%
*/

#include <iostream>

using namespace std;

bool a[100][99];
int result = 0;

void Vote(int& n, int& m) {

	for (int i = 0; i < n; i++) {
		int tmp = 0;

		for (int j = 0; j < m; j++) {
			if (a[i][j] == true) {
				tmp++;
			}
		}
		if (tmp > m / 2) {
			result++;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			char tmp;

			cin >> tmp;

			if (tmp == 'O') {
				a[i][j] = true;
			}
		}
	}

	Vote(n, m);

	cout << result;

	return 0;
}
