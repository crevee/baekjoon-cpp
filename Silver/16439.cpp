//BaekJoon_16439
//치킨치킨치킨

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 74.298%
*/

#include <iostream>
#include <algorithm>

using namespace std;

int a[30][30], pick[3];
int n, m, result = 0;

void Comb(int idx, int cnt) {
	if (cnt != -1) {
		pick[cnt] = idx;
	}

	if (cnt == 2) {
		int sum = 0;

		for (int i = 0; i < n; i++) {
			int score = 0;

			for (int j = 0; j < 3; j++) {
				score = max(a[i][pick[j]], score);
			}
			sum += score;
		}
		result = max(sum, result);

		return;
	}
	for (int i = idx; i < m; i++) {
		Comb(i + 1, cnt + 1);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	Comb(-1, -1);

	cout << result;

	return 0;
}
