//BaekJoon_2947
//나무 조각

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 57.204%
*/

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a[6];
	int tmp;

	for (int i = 1; i <= 5; i++) {
		cin >> a[i];
	}

	while (a[1] != 1 || a[2] != 2 || a[3] != 3 || a[4] != 4 || a[5] != 5) {
		for (int i = 1; i < 5; i++) {
			if (a[i] > a[i + 1]) {
				tmp = a[i + 1];
				a[i + 1] = a[i];
				a[i] = tmp;

				for (int j = 1; j <= 5; j++) {
					cout << a[j] << ' ';
				}
				cout << '\n';
				continue;
			}
		}
	}
	return 0;
}
